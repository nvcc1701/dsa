import sys
from os import path


def solve():
    n = int(input())
    a = list(map(int, input().split()))

    c, l, tc, tl = 0, 0, 0, 0

    for i in a:
        if i % 2 == 0:
            c += 1
            tc += i
        else:
            l += 1
            tl += i

    print(c, l, tc, tl, sep="\n")
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
