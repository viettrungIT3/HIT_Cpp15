#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    float x;
    cout << "Nhap n = ";
    cin >> n;
    cout << "Nhap x = ";
    cin >> x;
    double L = 0;
    if (n % 2 == 0)
        L = abs(log2(x) + exp(n) + 2021);
    else
    {
        L = 2021;
        float tu = 1, mau = 1;
        for (int i = 1; i <= n; i++)
        {
            tu *= (2 * i - 1);
            mau *= x;
            L += tu / mau;
        }
    }
    cout << "L = " << L;

    return 0;
}
