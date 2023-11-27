import math

n = int(input())

res = ""
cnt = 0

for i in range(2, math.isqrt(n)):
    print(n)
    while n % i == 0:
        cnt += 1
        res += str(i) + " "
        n //= i

    print(cnt, res, sep="\n")