int A(char litera)
{
    int litera_ascii;
    litera_ascii = (int)litera;
    if(litera_ascii >= 65 && litera_ascii <= 90)
    {
        return litera_ascii - 64;
    }
    else
    {
        litera_ascii = litera_ascii - 25;
        litera_ascii = litera_ascii - 7;
    }
    return litera_ascii - 64;
}

char B(char litera)
{
    if(islower(litera))
        return litera - 26 - 65;
    else
        return litera - 65;
}

void C(char litera)
{
    return isupper(litera) ? litera : litera - 26;
}

int D(char litera)
{
    return toupper(litera) - 64;
}