import sys
from os import path
from math import *


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    k = int(input())
    arr2 = [-1] * 2002

    res = 0
    for i in range(0, n):
        arr2[k - arr[i]] = i
    for i in range(0, n):
        if arr2[arr[i]] != -1 and i != arr2[arr[i]]:
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
