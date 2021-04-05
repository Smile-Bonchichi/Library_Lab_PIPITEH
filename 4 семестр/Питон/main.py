== =1 ==
import math


def distance(x1, y1, x2, y2):
    a = x2 - x1
    b = y2 - y1
    c = math.sqrt(a ** 2 + b ** 2)
    return (c)


x1 = int(input('Введите кординаты первой точки: \n x1 : '))
y1 = int(input(' y1 : '))
x2 = int(input('Введите кординаты второй точки: \n x2 : '))
y2 = int(input(' y2 : '))

print(distance(x1, y1, x2, y2))

== 2 == =


def power(a, n):
    res = 1
    for i in range(abs(n)):
        res *= a
    if n >= 0:
        return res
    else:
        return 1 / res


a = int(input('введите а: '))
n = int(input('введите n: '))

print('Ответ: ', power(a, n))

== =3 == =


def capitalize(word):
    first_letter_small = word[0]
    first_letter_big = chr(ord(first_letter_small) - ord('a') + ord('A'))
    return first_letter_big + word[1:]


source = input('Введите текст: ').split()
res = []
for word in source:
    res.append(capitalize(word))
print(' '.join(res))

== 4 ==


def reverse():
    x = int(input('введите последовательность: '))
    if x != 0:
        reverse()
    print(x)


reverse()

== 5 ==


def fib(n):
    if n == 1 or n == 2:
        return 1
    else:
        return fib(n - 1) + fib(n - 2)


print(fib(int(input('Введите число: '))))