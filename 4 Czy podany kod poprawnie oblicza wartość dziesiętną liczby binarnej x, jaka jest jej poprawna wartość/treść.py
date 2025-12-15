x = "10011011"
x_i = int(x)
p = 1
wartosc_dziesietna = 0
while x_i > 0:
    wartosc_dziesietna += (x_i % 10) * p
    x_i //= 10
    p *= 2