import sys
from os import path


def solve():
    r = int(input())
    res = 2 * r * 3.14
    res2 = r * r * 3.14

    print("%.4f %.4f" % (res, res2))

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
