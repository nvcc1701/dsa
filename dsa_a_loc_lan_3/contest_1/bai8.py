import sys
from os import path


def solve():
    a, b = map(int, input().split())

    tong = a + b
    hieu = a - b
    tich = a * b
    if b == 0:
        thuong = "INVALID"
    else:
        thuong = '{:.4f}'.format(a/b)
    print(tong, hieu, tich, thuong, sep="\n")
    pass


if __name__ == "__main__":
    if path.exists("input.txt"):
        sys.stdin = open("input.txt", "r")
        sys.stdout = open("output.txt", "w")

    test = 1
    # test = int(input())
    for _ in range(test):
        solve()
