#include <iostream>
#include <string>
using namespace std;

int ascii_sum(string s) {
    int sum = 0;
    for (char c : s) sum += c;
    return sum;
}

int main() {
    string odpowiedz = "epstein to odpowiedz tak no diddy";

    int z = ascii_sum(odpowiedz);
    int diddy = ascii_sum("diddy");
    int epstein = ascii_sum("epstein");
    int myster = ascii_sum("mr");
    int stju = ascii_sum("stuu");

    z -= diddy + epstein + myster + stju;

    cout << "WESOŁYCH ŚWIĄT ŻYCZY WAM W TYM ROKU ";
    if (z == 1337) cout << "Myster";
    else if (z == 2115) cout << "Stuu";
    else if (z == 1221) cout << "Epstein";
    else cout << "Diddy";
}