#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    //Nhap n voi dieu kien cho truoc
    cout << "Nhap n = ";
    do
    {
        cin >> n;
        if (n < 3 || n >= 100)
            cout << "Nhap lai n = ";
    } while (n < 3 || n >= 100);
    int a[1001];
    cout << "Nhap mang: " << endl;
    // Nhap mang
    for (int i = 0; i < n; i++)
    {
        cout << "\tNhap a[" << i << "] = ";
        cin >> a[i];
    }

    // Gợi ý số chính phương:  nếu phần nguyên căn bặc 2 của nó nhân lại bằng nó thì nó là SCP

    int dem = 0; // Sử dụng biến dem để đếm SCP có trong mảng
    for (int i = 0; i < n; i++)
    {
        int temp = sqrt(a[i]);
        if (temp * temp == a[i])
            dem++;
    }
    if (dem == n) // tất cả các số trong mảng đều là SCP
    {
        // Sắp xếp mảng
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        // Hien thi mang
        cout << "\nMang SCP sau khi sap xep la: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
    else
    {
        // Xóa số không phải là SCP
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = sqrt(a[i]);
            if (temp * temp != a[i])
            {
                // Hàm xóa
                for (int j = i; j < n; j++)
                {
                    a[j] = a[j + 1]; // tịnh tiến mảng
                }
                n--;
                i--;
            }
        }
        cout << "\nMang SCP sau khi xoa ... la: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }

    return 0;
}
