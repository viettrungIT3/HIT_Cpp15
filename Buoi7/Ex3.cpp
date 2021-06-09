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

    int sum = 0, dem = 0;
    for (int i = 0; i < n; i++)
        if (*(a+i) % 2 == 0)
        {
            sum += *(a+i);
            dem++;
        }
        
    int avg = sum / dem;

    for (int i = 0; i < n; i++)
        if (*(a+i) < avg)
            *(a+i) = avg;

    //Ghi mảng sau khi làm phẳng vào file “ABC02.TXT”
    ofstream f1("ABC02.TXT", ios::out);
    for (int i = 0; i < n; i++)
    {
        f1 << *(a + i) << " ";
    }
    f1 << endl;
    f1.close();

    //Đọc file “ABC02.TXT” ra màn hình
    ifstream f2("ABC02.TXT", ios::in);
    char s[255];
    while (!f2.eof())
    {
        f2.getline(s, 255);
        cout << s << endl;
    }

    f2.close();
    return 0;
}
