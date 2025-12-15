from math import isqrt, gcd, lcm

x = 67
x &= 6
x |= 7
x //= x ** 3
x += 3
x += gcd(16, 4)
x ^= lcm(8, 32)
x = isqrt(x)

if x == 6:
    print("Sean")
elif x == 7:
    print("Jeffrey")
elif x == 9:
    print("Marcin")
else:
    print("Stuart")