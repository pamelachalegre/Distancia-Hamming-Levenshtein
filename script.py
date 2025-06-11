# Distância de Levenshtein
par1 = ["kitten", "sitting"] 
par2 = ["intention", "execution"]
par3 = ["saturday", "sunday"]
par4 = ["mentor", "centers"]

print(f"A distância de Levenshtein entre '{par1[0]}' e '{par1[1]}' é: {levenshtein(par1[0], par1[1])}")
print(f"A distância de Levenshtein entre '{par2[0]}' e '{par2[1]}' é: {levenshtein(par2[0], par2[1])}")
print(f"A distância de Levenshtein entre '{par3[0]}' e '{par3[1]}' é: {levenshtein(par3[0], par3[1])}")
print(f"A distância de Levenshtein entre '{par4[0]}' e '{par4[1]}' é: {levenshtein(par4[0], par4[1])}")

# Distância de Hamming
par5 = ["10110", "11010"]
par6 = ["cat", "hat"]
par7 = ["hello", "world"]
par8 = ["karolin", "kathrin"]

print(f"A distância de Hamming entre '{par5[0]}' e '{par5[1]}' é: {hamming(par5[0], par5[1])}")
print(f"A distância de Hamming entre '{par6[0]}' e '{par6[1]}' é: {hamming(par6[0], par6[1])}")
print(f"A distância de Hamming entre '{par7[0]}' e '{par7[1]}' é: {hamming(par7[0], par7[1])}")
print(f"A distância de Hamming entre '{par8[0]}' e '{par8[1]}' é: {hamming(par8[0], par8[1])}")