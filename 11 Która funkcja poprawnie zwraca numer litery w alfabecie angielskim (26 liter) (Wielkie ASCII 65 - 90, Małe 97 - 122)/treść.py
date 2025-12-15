def A(litera):
    litera_ascii = litera[0]
    litera_ascii = ord(litera_ascii)
    if litera_ascii >= 65 and litera_ascii <= 90:
        return litera_ascii - 64
    else:
        litera_ascii = litera_ascii - 25
        litera_ascii = litera_ascii - 7
    return litera_ascii - 64

def B(litera):
    if litera.islower():
        return chr(litera) - 26 - 65
    else:
        return chr(litera) - 65

def C(litera):
    return litera if litera.isupper() else litera - 26

def D(litera:str):
    return ord(litera.upper()) - 64