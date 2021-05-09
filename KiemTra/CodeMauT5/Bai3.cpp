#include <bits/stdc++.h>
using namespace std;

void InputArr(float a[], int n)
{
    cout << "Nhap mang " << n << " so thuc: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "  Nhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void OuputArr(float a[], int n)
{
    //cout << "Mang vua nhap la: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

void Insert(float a[], int &n, int b)
{
    for (int i = 0; i < n; i++)
    {
        if (int(a[i]) == a[i])
        {
            if (isPrime(a[i]))
            {
                for (int j = n; j > i; j--)
                {
                    a[j] = a[j - 1];
                }
                a[i] = b;
                n++;
                i++;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    // int n;
    // cout << "Nhap n = ";
    // cin >> n;
    // float a[100];
    // InputArr(a, n);

    //test 1
    // float a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int n = sizeof(a) / sizeof(a[0]);
    //test 2
    float a[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    int n = sizeof(a) / sizeof(a[0]);
    

    cout << "Mang vua nhap la: ";
    OuputArr(a, n);

    int b;
    cout << "Nhap so nguyen b = ";
    cin >> b;

    Insert(a, n, b);
    cout << "Mang sau khi them: ";
    OuputArr(a, n);

    return 0;
}
