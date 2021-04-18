#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    // Nhap n voi dieu kien cho truoc
    cout << "Nhap n = ";
    do
    {
        cin >> n;
        if (n < 3 || n >= 1000)
            cout << "Nhap lai n = ";
    } while (n < 3 || n >= 1000);
    int a[1001];
    cout << "Nhap mang: " << endl;
    // Nhap mang
    for (int i = 0; i < n; i++)
    {
        cout << "\tNhap a[" << i << "] = ";
        cin >> a[i];
    }
    // Hien thi mang
    cout << "Mang vua nhap la: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    // Tim nhung so sieu nguyen to va in chung ra man hinh
    // Goi y: dau tien t so sanh so do co phai la SNT hay khong
    // Neu la SNT thì tiep tuc chia so do cho 10 và tiep tuc lai kiem tra phan du no.

    cout << "\nSieu nguyen to: ";
    for (int i = 0; i < n; i++)
    {
        int tam = a[i], dem = 0;
        if (tam < 2)
            i++; // hoặc dùng continue;
        else
        {
            for (int j = 2; j <= sqrt(float(tam)); j++)
            {
                if (tam % j == 0)
                    dem++;
            }
            if (dem == 0)
            {
                while (tam > 0)
                {
                    int tam2 = tam % 10;
                    if (tam2 < 2)
                        dem++;
                    for (int j = 2; j <= sqrt(float(tam2)); j++)
                    {
                        if (tam2 % j == 0)
                            dem++;
                    }
                    //  C2: vi chi co 2,3,5,7 la SNT nho hon 10, nen ta co the su dung
                    // if (tam2 == 2 || tam2 == 3 || tam2 == 5 || tam2 == 7);
                    // else dem++;
                    //
                    tam /= 10;
                }
                if (dem == 0)
                    cout << a[i] << " ";
            }
        }
    }

    return 0;
}
