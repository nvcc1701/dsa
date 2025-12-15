import sys
from os import path
from math import *


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    min_val = arr[0]
    arr2 = [0] * 2002

    for i in arr:
        if i < min_val:
            min_val = i
        arr2[i] += 1
    print(arr2[min_val])
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
