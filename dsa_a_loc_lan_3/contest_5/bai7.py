import sys
from os import path
from math import *


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    arr2 = [0] * 2002

    for i, val in enumerate(arr):
        if arr2[val] == 0:
            print(val, end=" ")
            arr2[val] = 1
    pass


if __name__ == "__main__":
    if path.exists("input.txt"):
        sys.stdin = open("input.txt", "r")
        sys.stdout = open("output.txt", "w")

    test = 1
    # test = int(input())
    for _ in range(test):
        solve()

    pass
