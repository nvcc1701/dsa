import sys
from os import path


def solve():
    c = int(input())
    res = (c * 9 / 5) + 32
    print("%.2f" % res)

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
