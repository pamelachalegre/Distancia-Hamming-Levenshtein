TARGET = main
CC = gcc
CFLAGS = -Wall
OBJ = main.o pocketpy.o levenshtein.o hamming.o

# Alvo padrão
all: $(TARGET)

# Compilação do executável
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -lm -o $(TARGET)

# Compilação dos arquivos individuais
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

pocketpy.o: pocketpy.c
	$(CC) $(CFLAGS) -c pocketpy.c

levenshtein.o: levenshtein.c
	$(CC) $(CFLAGS) -c levenshtein.c

hamming.o: hamming.c
	$(CC) $(CFLAGS) -c hamming.c

# Remoção dos arquivos gerados
clean:
	rm -f $(TARGET) $(OBJ)

# Execução do programa
run: $(TARGET)
	./$(TARGET)