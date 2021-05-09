#include <bits/stdc++.h>
using namespace std;

void SortArr(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n = ";
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cout << "  Nhap a[" << i << "] = ";
        cin >> a[i];
    }

    SortArr(a, n);
    cout << "Mang vua sap xep: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && (-a[i]) % 2 != 0)
        {
            for (int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }
    cout << "\nMang sau khi xoa: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
