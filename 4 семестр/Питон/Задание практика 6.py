===1===
from abc import ABCMeta, abstractmethod, abstractproperty


class abcClass(metaclass=ABCMeta):
    def __init__(self, x=0):
        self.__x = x

    @abstractmethod
    def getX(self):
        return self.__x


class abcClass2(abcClass):
    def getX(self):
        return super().getX()


a = abcClass2(14)
print(a.getX())

===2===
class A:
    def __init__(self, a):
        self._a = a

    def show(self):
        print(self._a)


class B(A):
    def __init__(self, a, b):
        super(B, self).__init__(a)
        self._b = b

    def show(self):
        print(self._a, self._b)


class C(B):
    def __init__(self, a, b, c):
        super(C, self).__init__(a, b)
        self._c = c

    def show(self):
        print(self._a, self._b, self._c)


a = A(4)
b = B(6, 6)
c = C(4, 6, 8)
a.show()
b.show()
c.show()