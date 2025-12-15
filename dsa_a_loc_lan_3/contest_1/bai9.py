import sys
from os import path


def solve():
    n = int(input())
    if n%400 == 0:
        print('YES')
    elif n % 4 == 0 and n % 100 != 0:
        print('YES')
    else: 
        print('NO')
    pass


if __name__ == "__main__":
    if path.exists("input.txt"):
        sys.stdin = open("input.txt", "r")
        sys.stdout = open("output.txt", "w")

    test = 1
    # test = int(input())
    for _ in range(test):
        solve()
