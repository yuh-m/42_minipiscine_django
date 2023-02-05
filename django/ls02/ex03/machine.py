#!/bin/python3

import random
from beverages import HotBeverage, Coffee, Tea, Cappuccino, Chocolate

class CoffeeMachine:

    class EmptyCup(HotBeverage):
        def __init__(self):
            self.name = "empty cup"
            self.price = "0.90"

        def description(self) -> str:
            return "An empty cup?! Gimme my money back!"

    class BrokenMachineExpection(Exception):
        def __init__(self) -> None:
            super().__init__("This coffee machine has to be repaired")

    def __init__(self):
        self.served_drinks = random.randint(0, 9)
        print("Starting machine:", self.served_drinks, " beverages done since last repair")

    def repair(self) -> str:
        self.served_drinks = 0

        return print("Machine repaired, restarting machine \n")

    def serve(self, beverage: HotBeverage) -> HotBeverage():
        if self.served_drinks >= 10:
            raise CoffeeMachine.BrokenMachineExpection
        self.served_drinks += 1
        served_beverage = random.choice([beverage(), CoffeeMachine.EmptyCup()])

        return served_beverage


def run_coffee_machine():
    coffe_machine = CoffeeMachine()
    beverages = [Chocolate, Coffee, Tea, Cappuccino]
    for _ in range(0, 19):
        picked_beverage = random.choice(beverages)
        try:
            print(coffe_machine.serve(picked_beverage))
        except CoffeeMachine.BrokenMachineExpection as error:
            print(error)
            coffe_machine.repair()


if __name__ == "__main__":
    run_coffee_machine()

