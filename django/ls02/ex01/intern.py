#!/bin/pyhon3

class Intern:
    """Class Intern - represent an intern"""

    class Coffee():
        def __str__(self) -> str:
            return "This is the worst coffee you ever tasted"

    def __init__(self, Name=None):
        self.Name = "My name? I'm nobody, an intern, I have no name" if Name is None else Name

    def __str__(self) -> str:
        return self.Name

    def work(self) -> str:
        raise Exception("I'm just an intern, I can't do that")

    def make_coffee(self) -> Coffee():
        return Intern.Coffee()

def create_intern():
    intern1 = Intern()
    intern2 = Intern("Mark")
    print("First intern hired: ", intern1)
    print("Second intern hired: ", intern2)

    print("Mark, please make coffee")
    print(intern2.make_coffee())

    print("Now go to work")

    try:
        print(intern2.work())
    except Exception as work_error:
        print(work_error)

if __name__ == "__main__":
    create_intern()
