#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a = {9, 8, 7, 6, 5, 4, 3, 7};
    vector<int> b = {2, 2, 2, 2, 2, 2, 2, 1};
    vector<int> c = {5, 3, 1, 6, 8, 1, 6, 7};
    vector<vector<int>> abc = {a, b, c};

    for(auto x : abc)
    {
        switch(x[3])
        {
            case 2:
                cout << 2;
            case 4:
                cout << 4;
            case 6:
                cout << 6;
            default:
                cout << "<-_->";
        }
    }
    cout << abc[2][2];

    return 0;
}