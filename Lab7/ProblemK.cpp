#include <iostream>

using namespace std;

int maxDigit(string a, int b)
{
    if (b == a.size()) return 0;
    return max(a.at(b) - 48, maxDigit(a, b + 1));
}

int main()
{

    string a;
    cin >> a;
    cout << maxDigit(a, 0);

    return 0;
}