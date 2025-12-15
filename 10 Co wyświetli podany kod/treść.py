a = [9, 8, 7, 6, 5, 4, 3, 7]
b = [2, 2, 2, 2, 2, 2, 2, 1]
c = [5, 3, 1, 6, 8, 1, 6, 7]
abc = [a, b, c]

for x in abc:
    v = x[3]
    if v <= 2:
        print(2, end="")
    if v <= 4:
        print(4, end="")
    if v <= 6:
        print(6, end="")
    print("<-_->", end="")

print(abc[2][2], end="")