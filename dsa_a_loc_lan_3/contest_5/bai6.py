import sys
from os import path
from math import *


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    res = 0

    for i in range(0, n):
        for j in range(i + 1, n):
            if i != j and abs(arr[i] + arr[j]) == k:
                res += 1

    print(res)
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
