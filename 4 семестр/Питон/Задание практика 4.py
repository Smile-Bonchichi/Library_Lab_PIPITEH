====1====
PythonProject2
====2====
import os

dir_path = os.path.dirname(os.path.realpath(__file__))

for root, dirs, files in os.walk(dir_path):
    for file in files:

        if file.endswith('Nazar.txt'):
            print(root + '/' + str(file))

====3====
import random

n = random.randint(1, 12)
print('Введите ваш вопрос и нажмите клавишу «enter»:')
input()

if n == 1:
    print('Да')
elif n == 2:
    print('Нет')
elif n == 3:
    print('Сейчас')
elif n == 4:
    print('Завтра')
elif n == 5:
    print('Позже')
elif n == 6:
    print('Никогда ни за что')
elif n == 7:
    print('Может быть')
elif n == 8:
    print('Спроси позже')
elif n == 9:
    print('Не рассчитывай на это')
elif n == 10:
    print('Наиболее вероятно')
elif n == 11:
    print('Определённо да!')
elif n == 12:
    print('Определённо нет!')

====4=====
import re
import random
word=random.choice(['да','нет','наверное','возможно'])
s=input("Введите предложение:")
ss_list=s.split()
print(s.replace(ss_list [0],word))
print(s.replace(ss_list [-1],word))
====5=====
from tkinter import *


def clicked():
    lbl.configure(text="Привет")


window = Tk()
window.title("Добро пожаловать в приложение PythonRu")
lbl = Label(window, text="Здраствуйте")
lbl.grid(column=0, row=0)
btn = Button(window, text="Нажми", command=clicked)
btn.grid(column=1, row=0)
window.mainloop()