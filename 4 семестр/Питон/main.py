x = [ ]
n = int(input('Введите колличество: '))
k =0 ;
result= 0
for i in range(n):
    x.append(int(input('Введите числа: ')))
for i in range(n):
    if i != n -1:
        if x[i] == x[i+1]:
            k+=1
            result = x[i]
            if k == 1:
                result2 = x[i]
    else:
        print()
    if k == 0:
        print('Нету таких пар')
    elif k == 1:
        print('Таких пар 1: ', result)
    else:
        print('Таких пар', k,' первая пара: ', result2)