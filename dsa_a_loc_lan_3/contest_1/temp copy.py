import sys
import math
from os import path


def solve():
    x1, y1, x2, y2 = map(int, input().split())
    res = math.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)
    print(f"{res:.2f}")
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
