#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    auto losowa_liczba = rand() / 67.;
    cout << losowa_liczba;
}