#include <iostream>
#include <ctime>

using namespace std

int main()
{
    srand(time(NULL));
    int losowa_liczba = rand();
    cout << "Wylosowana liczba to: " << losowa_liczba;
    return 0;
}