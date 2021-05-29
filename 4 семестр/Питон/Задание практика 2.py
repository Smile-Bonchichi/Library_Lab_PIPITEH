=====1=====
s = input('Ввести слова: ')
l = len(s)
m = 0
ind = 0
count = 0
for i in range(l):
    if s[i] != ' ':
        count += 1
    else:
        if count > m:
            m = count
            ind = i - count
        count = 0
if count > m:
    m = count
    ind = i - count + 1
print(s[ind:ind + m])

=====2=====
str=input('Введите слова: ')
list = str.split(' ')
min=list[0]
for i in range(len(list)):
    if len(list[i])>len(min):
        min=list[i]

print('Самое длинное слово: ',min)
=====3=====
str=input('Введите слова: ')
list = str.split(' ')
min=list[0]
for i in range(len(list)):
    if len(list[i])<len(min):
        min=list[i]

print('Самое короткое слово: ',min)
=====4=====
str=input('Введите строку: ')
list = str.split(' ')
word=input('Поиск: ')
result = ''
for i in range(len(list)):
    if word==list[i]:
        result=list[i]
        
    if result != ' ':
        print('Результат поиска: ',result)
    else:
        print('Такого слова нет.')
=====5=====
s = input('Напишите предложение: ')
s = s.split()
l = len(s)
print(l)