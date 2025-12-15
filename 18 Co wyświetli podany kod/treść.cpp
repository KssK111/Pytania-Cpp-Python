#include <iostream>
#include <numeric>
#include <cmath>

using namespace std;

int main()
{
    int x = 67;
    x &= 6;
    x |= 7;
    x /= (x * x * x);
    x += 3;
    x += gcd(16, 4);
    x ^= lcm(8, 32);
    x = sqrt(x);

    if (x == 6)
        cout << "Sean";
    else if (x == 7)
        cout << "Jeffrey";
    else if (x == 9)
        cout << "Marcin";
    else
        cout << "Stuart";
}
