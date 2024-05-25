#!/bin/python3

'''
Print Weird if the number is weird. Otherwise, print Not Weird
'''

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input().strip())
    if n < 1 or n > 100:
        print("OUT OF BOUNDS")
    if n % 2 != 0:
        print("Weird")
    elif (n % 2 == 0) and n in range(2, 6):
        print("Not Weird")
    elif (n % 2 == 0) and n in range(6, 21):
        print("Weird")
    elif (n % 2 == 0) and n > 20:
        print("Not Weird")
