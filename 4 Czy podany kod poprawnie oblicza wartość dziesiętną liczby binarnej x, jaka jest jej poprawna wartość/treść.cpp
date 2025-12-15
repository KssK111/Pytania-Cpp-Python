#include <iostream>

using namespace std;

int main()
{
    string x = "10011011";
    int x_i = stoi(x);
    int p = 1;
    int wartosc_dziesietna = 0;
    while(x_i > 0)
    {
        wartosc_dziesietna += (x_i % 10) * p;
        x_i /= 10;
        p *= 2;
    }
}