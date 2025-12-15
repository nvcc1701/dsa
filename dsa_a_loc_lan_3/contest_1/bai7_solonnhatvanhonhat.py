import sys
from os import path


def solve():
    a, b = map(int, input().split())
    x1, x2 = 0, 0

    x1 = a // b * b

    if a % b == 0:
        x2 = a
    else: 
        x2 = (a//b +1)*b

    print(x1, x2, sep = ' ')
    pass


if __name__ == "__main__":
    if path.exists("input.txt"):
        sys.stdin = open("input.txt", "r")
        sys.stdout = open("output.txt", "w")

    test = 1
    # test = int(input())
    for _ in range(test):
        solve()