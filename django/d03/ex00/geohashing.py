#!usr/bin/python3

# geohash(37.421542, -122.085589, b'2005-05-26-10458.68')
# return - 37.857713 -122.544543
# python3 geohashing.py 37.421542 -122.085589 b'2005-05-26-10458.68'

from antigravity import geohash
import sys


def test():

    if len(sys.argv) == 4:
        try:
            geohash(float(sys.argv[1]), float(sys.argv[2]), sys.argv[3].encode("utf-8"))
        except:
            print("Invalid input - lattitude(float), longitude(float), date")
    else:
        print("Invalid number of arguments")


if __name__ == "__main__":
    test()
