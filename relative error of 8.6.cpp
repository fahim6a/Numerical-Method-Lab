#include <bits/stdc++.h>
using namespace std;
int main()
{
    double value = 8.6;
    int n = 1;
    double x = (0.5 * pow(10, -n)); // according to formula
    double ans = (x / value);
    cout << "The relative error is: " << ans << endl;
    return 0;
}