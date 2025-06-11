par1 = ["kitten", "sitting"]
par2 = ["intention", "execution"]
par3 = ["saturday", "sunday"]
par4 = ["mentor", "centers"]

print(f"A distância de Levenshtein entre '{par1[0]}' e '{par1[1]}' é: {levenshtein(par1[0], par1[1])}")
print(f"A distância de Levenshtein entre '{par2[0]}' e '{par2[1]}' é: {levenshtein(par2[0], par2[1])}")
print(f"A distância de Levenshtein entre '{par3[0]}' e '{par3[1]}' é: {levenshtein(par3[0], par3[1])}")
print(f"A distância de Levenshtein entre '{par4[0]}' e '{par4[1]}' é: {levenshtein(par4[0], par4[1])}")