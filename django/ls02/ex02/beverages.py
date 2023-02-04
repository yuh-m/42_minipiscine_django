#!/bin/pyhon3

class HotBeverage:

	def __init__(self):
		self.name = "hot beverage"
		self.price = "0.30"

	def __str__(self) -> str:
		format = f"name: {self.name} \n" \
				f"price: {self.price} \n" \
				f"description: {self.description()}"

		return format

	def description(self) -> str:
		return "Just some hot water in a cup"

class Coffee(HotBeverage):
	def __init__(self):
		self.name = "coffee"
		self.price = "0.40"

	def description(self) -> str:
		return "A coffee, to stay awake"

class Tea(HotBeverage):
	def __init__(self):
		self.name = "tea"
		self.price = "0.30"

class Chocolate(HotBeverage):
	def __init__(self):
		self.name = "chocolate"
		self.price = "0.50"

	def description(self) -> str:
		return "Chocolate, sweet chocolate..."

class Cappuccino(HotBeverage):
	def __init__(self):
		self.name = "cappucino"
		self.price = "0.45"

	def description(self) -> str:
		return "Un po' di Italia nella sua tazza!"




def print_beverage():

	print(HotBeverage(), '\n').
	print(Coffee(), '\n')
	print(Tea(), '\n')
	print(Chocolate(), '\n')
	print(Cappuccino())

if __name__ == "__main__":
    print_beverage()
