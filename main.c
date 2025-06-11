#include <stdio.h>
#include <stdlib.h>
#include "levenshtein.h"
#include "pocketpy.h"

static bool py_levenshtein(int argc, py_Ref argv) {  
    // Verificação dos argumentos
    PY_CHECK_ARGC(2); 
    PY_CHECK_ARG_TYPE(0, tp_str); 
    PY_CHECK_ARG_TYPE(1, tp_str);

    // Transformação dos argumentos em strings C
    const char* a = py_tostr(py_arg(0));
    const char* b = py_tostr(py_arg(1));

    // Cálculo da distância de Levenshtein
    int dist = levenshtein(a, b); 

    // Retorno do resultado para Python
    py_newint(py_retval(), dist);

    return true; 
}

int main() {
    // Inicialização do interpretador
    py_initialize(); 

    // Registro da função no Python
    py_Ref r0 = py_getreg(0);
    py_newnativefunc(r0, py_levenshtein);
    py_setglobal(py_name("levenshtein"), r0);

    // Leitura do script Python
    FILE* arquivo = fopen("script.py", "r");

    fseek(arquivo, 0, SEEK_END);  // Move o ponteiro do arquivo para o final
    long length = ftell(arquivo); // Obtém o tamanho do arquivo
    fseek(arquivo, 0, SEEK_SET);  // Move o ponteiro do arquivo de volta para o início

    char* source = (char*)malloc(length + 1); // Aloca memória para o conteúdo do arquivo
    fread(source, 1, length, arquivo); // Lê o conteúdo do arquivo
    source[length] = '\0'; // Transfoma o conteúdo lido em uma string C válida ao adicionar o terminador nulo

    // Executa o script Python
    bool ok = py_exec(source, "script.py", EXEC_MODE, NULL);
    
    fclose(arquivo);
    free(source);
    
    if(!ok) {
        printf("Erro ao executar script.py:\n");
        py_printexc();
        py_finalize();
        return 1;
    }

    py_finalize();
    return 0;
}