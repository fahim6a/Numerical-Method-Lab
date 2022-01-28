#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cout << "enter float values : ";
    cin >> x;
    stringstream ss;
    ss << abs(x - (int)x);
    string s;
    ss >> s;
    cout << "Numbers after decimal point = " << s.length() - 2 << endl;
    return 0;
}