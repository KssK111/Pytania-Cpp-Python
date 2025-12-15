from math import prod

y = 7
y -= 6
y += 9
y += ord("c")
y *= ord(chr(7))
y //= 99
y *= prod(range(999))

if y == 6:
    print("Putra")
elif y == 4:
    print("Burton")
elif y == 2:
    print("Edward")
elif y == 0:
    print("Combs")