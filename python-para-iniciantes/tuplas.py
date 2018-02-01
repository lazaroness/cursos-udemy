#coding: utf-8

# Uma tuple é parecida com um array, porem não é possivel
# adicionar e nem remover elementos

tuplas = ("lazarone", "python", "udemy")
print(tuplas)

print(tuplas[0])
print(tuplas[1])
print(tuplas[2])

# Dar erro caso a posição indicada não exista
#print(tuplas[3])

# Pegando uma parte da tupla
# no exemplo a seguir eu quero da posicao 0 dois elementos
# ou seja vai retornar a posicao 0 e a posicao 1
print(tuplas[0:2])

# Pegando o tamanho da tupla
print(len(tuplas))

print(tuplas + tuplas)

print(tuplas * 5)

# Verificando se existe um elemento
print(4 in tuplas)
print("udemy" in tuplas)

# Convertendo uma lista(array) em uma tuple
lista = [1, 4, 6, "lazarone"]
print(lista)
tuplas2 = tuple(lista)
print(tuplas2)
