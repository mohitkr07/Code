// https://drive.google.com/file/d/1X2_z3KCtPfPUf_2LEKw6oHQbkTCd6fnO/view?usp=sharing

#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n)
{
    if (n == 0)
        return 1;

    if (n < 0)
    {
        x = 1 / x;
        n = abs(n); // use abs(n) instead of n*-1
    }

    double temp = myPow(x, n / 2);

    if (n % 2 == 0)
        return temp * temp;
    else
        return temp * temp * x;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double x;
        int n;
        cin >> x >> n;

        cout << myPow(x, n) << endl;
    }

    return 0;
}