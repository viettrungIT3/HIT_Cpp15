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
        if (n < 3 || n > 100)
            cout << "Nhap lai n = ";
    } while (n < 3 || n > 100);
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
        int sum = 0; //khai bao biem sum
        for (int j = 1; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
                sum += j;
        }
        if (sum == a[i])
            dem++;
    }
    if (dem == n) // tất cả các số trong mảng đều là SCP
    {
        // khởi tạo giá trị và vị trí max min
        int Max = a[0];
        int Min = a[0];
        int indexMax, indexMin;
        indexMax = indexMin = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > Max)
            {
                Max = a[i];
                indexMax = i;
            }
            else
            {
                Min = a[i];
                indexMin == i;
            }
        }
        cout<<"Khoang cach giua max và min la: "<<indexMax - indexMin<<endl;
    }
    else
    {
        // Xóa số phẩn tử lẻ trong mảng
        int i = 0;
        for (int i = 0; i < n; i++)
        {
            if ( a[i] % 2 == 1 )
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
        cout << "\nMang sau khi xoa cac phan tu le la: ";
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
    }

    return 0;
}
