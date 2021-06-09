#include <bits/stdc++.h>
using namespace std;

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

    int values = *a;
    for (int i = 0; i < n; i++)
        if (*(a + i) > values)
        {
            values = *(a + i);
        }

    int dem = 0;
    for (int i = 0; i < n; i++)
        while (*(a + i) == values)
        {
            for (int j = i; j < n; j++)
            {
                *(a + j) = *(a + j + 1);
            }
            n--;
            *(a + n) = NULL;
            dem++;
        }
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
    cout << endl;
    // cout<<"Dem = "<<dem;

    //ghi tổng số phần tử đã xóa dưới dạng chuỗi vào file “ABC03.TXT”
    ofstream f1("ABC03.TXT", ios::out);
    f1 << dem;
    f1.close();

    //Đọc file “ABC03.TXT” ra màn hình
    ifstream f2("ABC03.TXT", ios::in);
    char s[255];

    cout << "So phan tu da xoa la: ";
    while (!f2.eof())
    {
        f2.getline(s, 255);
        cout << s;
    }
    cout << " phan tu";
    // f2.close();
    return 0;
}
