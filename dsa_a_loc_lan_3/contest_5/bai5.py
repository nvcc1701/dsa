import sys
from os import path
from math import *


def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    flag = False

    for i in range(0, n, 2):
        if arr[i] % 2 == 0:
            flag = True
            print(arr[i], end=" ")
    if flag == False:
        print("NONE")

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
