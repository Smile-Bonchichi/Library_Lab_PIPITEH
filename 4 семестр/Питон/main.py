#1
n, m = [int(i) for i in input('размер массива: ').split()]
 a = [[int(j) for j in input().split()] for i in range(n)]
 max = a[0][0]
 max_i = 0
 max_j = 0
 for i in range(n):
     for j in range(m):
         if (a[i][j]>max):
             max = a[i][j]
             max_i=i
             max_j=j
 print ('максимальный элемент: ',max,'\nкоординаты: ',max_i, max_j )

# ==2==
# n = int(input('введите размер массива [n x n]: '))
# a = [['.'] * n for  i in   range(n)]
# for row  in a:
#     print(' '.join([str(elem) for elem in row]))
#     print()
#     d=n-1
#    c = int(n/2)
#for i in range(n):
#     for j in range(n):
#         if i==j or j==d or j == c or i == c:
#             a[i][j]='*'
#             d-=1
# for row  in a:
#     print(' '.join([str(elem) for elem in row]))

#==3==
# n, m = [int(i) for i in input().split()]
# a = []
# for i in range(n):
#     a.append([])
#     for j in range(m):
#         if (i + j) % 2 == 0:
#             a[i].append('.')
#         else:
#             a[i].append('*')
# for row in a:
#     print(' '.join(row))

#=4==
#n = int(input('введите размер: '))
#a = [[abs(i - j) for j in range(n)] for i in range(n)]
#for row in a:
#     print(' '.join([str(i) for i in row]))

#==5==
# n = int(input('введите размер: '))
# a = [[0] * n for i in range(n)]
# for row in a:
#     print(' '.join([str(i) for i in row]))
# print()
# for i in range(n):
#     for j in range(n):
#         if i==j:
#             a[i][j] = 1
#         if i > j:
#             a[i][j] = '2'
# for row in a:
#     print(' '.join([str(i) for i in row]))
# print()