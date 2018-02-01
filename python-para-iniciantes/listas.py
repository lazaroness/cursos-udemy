#coding: utf-8

lista = [1, 4, 7, 'lazarone', 23, 14]
print(lista)

# Adicionando um elemento no array
lista.append("python")
print(lista)

lista.append(20)
print(lista)

# Pegando a posição do elemento indicado
print(lista.index("lazarone"))
print(lista.index(23))

# Pegando a quantidade de vezes que existe o elemento indicado
print(lista.count(4))
lista.append(4)
print(lista.count(4))

# Removendo um elemento
lista.remove("python")
print(lista)

lista.remove(4)
print(lista)

# Invertendo a ordem
lista.reverse()
print(lista)

# Ordenando do menor para o maior
lista.sort()
print(lista)
