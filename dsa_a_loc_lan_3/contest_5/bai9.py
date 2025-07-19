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
    arr = list(map(int, input().split()))

    cnt = 0
    for i in range(0, n):
        left, right = 0, 0
        for j in range(0, i - 1):
            if nt(arr[j]):
                left += arr[j]
        for j in range(i + 1, n):
            if nt(arr[j]):
                right += arr[j]
        if left == right:
            cnt += 1
    print(cnt)
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
