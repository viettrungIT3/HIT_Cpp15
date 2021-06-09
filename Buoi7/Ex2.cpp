#include <bits/stdc++.h>
using namespace std;

void Sort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (*(a + i) > *(a + j))
            {
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n = ";
    do
    {
        cin >> n;
        if (n <= 1 || n > 40)
            cout << "Nhap lai n = ";
    } while (n <= 1 || n >= 40);

    int *a = new int[n];
    cout << "Nhap " << n << " phan tu nguyen: ";
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }

    //Ghi mảng vừa nhập vào file “ABC01.TXT”
    ofstream f1("ABC01.TXT", ios::out);
    for (int i = 0; i < n; i++)
    {
        f1 << *(a + i) << " ";
    }
    f1 << endl;

    //Sort
    Sort(a, n);

    //ghi bổ xung vào file “ABC01.TXT”
    for (int i = 0; i < n; i++)
    {
        f1 << *(a + i) << " ";
    }
    f1.close();

    //Đọc 2 mảng đã có trong file “ABC01.TXT” ra màn hình
    ifstream f2("ABC01.TXT", ios::in);
    char s[255];
    while (!f2.eof())
    {
        f2.getline(s, 255);
        cout << s << endl;
    }

    f2.close();
    return 0;
}
