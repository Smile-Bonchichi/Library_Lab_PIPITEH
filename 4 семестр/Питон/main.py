#1
a = int(input('Введите 1ое число:'))
b = int(input('Введите 2ое число:'))
if a < b:
    print(a)
else:
    print(b)

# 2
# x = int(input('Введите 1ое число:'))
# y = int(input('Введите 2ое число:'))
# z = int(input('Введите 3eе число:'))
# if x == y == z:
#     print(3)
# elif x == y or y == z or x == z:
#     print(2)
# else:
#     print(0)

# 3
# import math
# print("Введите коэффициенты для уравнения")
# print("ax^2 + bx + c = 0:")
# a = float(input("a = "))
# b = float(input("b = "))
# c = float(input("c = "))
# discr = b ** 2 - 4 * a * c
# print("Дискриминант D = %.2f" % discr)
#if discr > 0:
#    x1 = (-b + math.sqrt(discr)) / (2 * a)
#    x2 = (-b - math.sqrt(discr)) / (2 * a)
#   print("x1 = %.2f \nx2 = %.2f" % (x1, x2))
#elif discr == 0:
#   x = -b / (2 * a)
#    print("x = %.2f" % x)
#else:
#    print("Корней нет")

# 4
# y=int(input('Введите число:'))
# if (y % 4 == 0) and (y % 100 != 0) or (y % 400 == 0):
#   print('Да год високосный.')
# else:
#   print('Нет год не високосный')

#5
# age = int(input("Введите возраст: "))
# k = age % 10
# if (100 < age):
#    print('Введите только до 100')
# elif (age>9)and(age<20)or(age>110)or(k>4)or(k==0):
#    print("Вам",age,"лет.")
# else:
#    if k==1: print("Вам",age,"год.")
#    else: print("Вам",age,"года.")