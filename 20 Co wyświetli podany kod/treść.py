odpowiedz = "epstein to odpowiedz tak no diddy"
z = sum(map(ord, odpowiedz))
didi = "diddy"
epstin = "epstein"
myster = "mr"
stju = "stuu"
pliki_epsteina = list(map(lambda x: sum(map(ord, x)), [didi, epstin, myster, stju]))
[didi, epstin, myster, stju] = pliki_epsteina
z = z - didi - epstin - myster - stju

print("WESOŁYCH ŚWIĄT ŻYCZY WAM W TYM ROKU ", end="")
if z == 1337:
    print("Myster")
elif z == 2115:
    print("Stuu")
elif z == 1221:
    print("Epstein")
else:
    print("Diddy")