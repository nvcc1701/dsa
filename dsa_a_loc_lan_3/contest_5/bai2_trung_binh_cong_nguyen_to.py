import sys
from os import path
from math import *


def nt(n):
    if n < 2:
        return False
    for i in range(2, isqrt(n) + 1):
        if n % i == 0:
            return False
    return True


def solve():
    n = int(input())
    a = list(map(int, input().split()))

    c, s = 0, 0

    for i in a:
        if nt(i):
            c += 1
            s += i
    print("%.3f" % (s / c))
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
