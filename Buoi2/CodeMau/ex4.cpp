#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n = ";    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
                cout << "* ";
            else if (j == 0 || j == n - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}