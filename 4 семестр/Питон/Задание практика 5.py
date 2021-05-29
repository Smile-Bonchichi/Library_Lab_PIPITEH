===1===
class Mercedes(object):

    def __init__(self, colors, type, model):
        self.colors = colors
        self.type = type
        self.mode = model

    def drive(self):
        """
        Drive
        """
        return "Я за рулем машины"

    def brake(self):
        """
        Brake
        """
        return "Я пропустил пешеходов"

if __name__ == "__main__":
    car = Mercedes("black","sedan","s-class")
    print(car.colors)
    print(car.type)
    print(car.mode)

    pick = Mercedes("grey","pickup","x-class")
    print(pick.colors)
    

===2===
class Cars():

    def __init__(self,brand,type,country):
        self.brand=brand
        self.type=type
        self.country=country


if __name__=="__main__":
    car = Cars("Lexus", "jeep", "japan")
    print("У меня машина марки",car.brand)


class Student():

    def __init__(self,group,cours,nat):
        self.group=group
        self.cours=cours
        self.nat=nat

if __name__=="__main__":
    person=Student("Пи-5-19","2ой курс","Кыргыз")
    print("Привет меня зовут Назар я",person.cours,"и я из группы",person.group)