====1====
x= int(input('Введите число от 1 до 9: '))
print('Ваше число:',x)
if 1<=x<=3:
    s= input('Введите произвольную строку: ')
    n= int(input('Сколько раз повторить строку? '))
    a = [s for k in range(n)]
    for i in a:
        print(i)
elif 4<=x<=6:
    m= int(input('Степень, в которую возвести число: '))
    x= int(x)
    print(x**m)
elif 7<=x<=9:
    a = [i + x for i in range(1, 10)]
    print(a)
else:
    print('Ошибка ввода')

=======2=======
def one(x):
    s = input('Введите произвольную строку: ')
    n = int(input('Сколько раз повторить строку? '))
    for i in range(n):
        print (s)

def two(x):
    m=int(input('Введите степень: '))
    x=x**m
    print(x)

def three(x):
    for i in range(10):
        x+=1
    print(x)

def four(x):
    if x>=1 and x<=3:
        one(x)
    elif x>= 4 and x<=6:
        two(x)
    elif x>= 4 and x<=6:
        three(x)
    else:
        print('Ошибка')

=======3=======
str1 = input('Введите вашу строку:').split()
i = 0
k = 0
list = []

def space(str1):
 return(str1)
 while k <= len(str1):
  if str1(i) != " ":
   list.append(str(i))
   return(list)
  i += 1
  k += 1

mini_list = space(str1)
print(mini_list,)
print('В этом слове',len(str1),'слов')

=====4=====
def fun(x, y):
    print('Результат: ')
    print(pow(x, y))
    pass

print('Введите число: ')
x = int(input())
y = 1
print('Чтобы выйти введи 0: ')
while x != 0:
        fun(x, y)
        y = x
        print('Введите число: ')
        x = int(input())
        if x == 0:
            exit()
        continue=====5=====
from .package import one
from .package import two
from .package import three

def zas(x):
    if x >= 1 and x <= 3:
        one(x)
    elif x >= 4 and x <= 6:
        two(x)
    elif x >= 4 and x <= 6:
        zas(x)
    else:
        print('Ошибка')