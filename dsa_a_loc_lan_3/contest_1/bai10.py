import sys
from os import path


def solve():
    a,b,c = map(int, input().split())
    
    if (a > 0 and b >0 and c > 0) and ((a+b)>c and (a+c)>b and (b+c)>a):
        print("YES")
    else: 
        print("NO")


if __name__ == "__main__":
    if path.exists("input.txt"):
        sys.stdin = open("input.txt", "r")
        sys.stdout = open("output.txt", "w")

    test = 1
    # test = int(input())
    for _ in range(test):
        solve()
