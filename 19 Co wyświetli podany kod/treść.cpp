#include <iostream>

using namespace std;

int main()
{
    int y = 7;
    y -= 6;
    y += 9;
    y += (int)'c';
    y *= (int)(char)7;
    y /= 99;
    for (int i = 0; i < 999; i++)
        y *= i;

    if (y == 6)
        cout << "Putra";
    else if (y == 4)
        cout << "Burton";
    else if (y == 2)
        cout << "Edward";
    else if (y == 0)
        cout << "Combs";
}
