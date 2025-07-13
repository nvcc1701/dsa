import sys
from os import path
from math import *


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    x = int(input())

    lh, nh = 0, 0
    for item in arr:
        if item > x:
            lh += 1
        elif item < x:
            nh += 1
    print(nh, lh, sep="\n")
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
