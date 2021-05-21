#include <bits/stdc++.h>

using namespace std;

void NhapMang(int *a, int n)
{
    cout << "Nhap mang:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "  a[" << i << "] = ";
        // Do giá trị con trỏ là địa chỉ rồi. Nên bạn sẽ không thấy dấu & quen thuộc nữa
        cin >> *(a + i);
    }
}

void XuatMang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(a + i) << " ";
    }
}

// void swap( int n, int m)
// {
//     int temp = n;
//     n = m;
//     m = temp;
// }

void ThemPhanTu(int *a, int &n, int val, int pos)
{
    // Phân bổ lại bộ nhớ đã cấp phát cho con trỏ.
    // Ta cần thêm 1 ô nhớ cho nó => dùng realloc()
    a = (int *)realloc(a, (n + 1) * sizeof(int));
    // Dich chuyen mang de tao o trong truoc khi them.
    for (int i = n; i > pos; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    // Chen val tai pos
    *(a + pos) = val;
    // Tang so luong phan tu sau khi chen.
    ++n;
}

void XoaPhanTu(int *a, int &n, int pos)
{
    // Dich chuyen mang
    for (int i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    // Cấp phát lại vùng nhớ, giờ ta chỉ cần n - 1 ô nhớ
    a = (int *)realloc(a, (n - 1) * sizeof(int));

    // Giam so luong phan tu sau khi xoa.
    n--;
}

void Ahihi(int *a, int &n)
{
    // vi tri can them
    int index = 0;
    for (int i = 0; i < n; i++)
        if (*(a + i) < 0)
        {
            ThemPhanTu(a, n, *(a + i), index);
            index++;
            i++;
        }
    cout << "\nMang sao chep cac phan tu am ve dau mang la: ";
    XuatMang(a, n);
}

void XoaSoChan(int *a, int n)
{
    for (int i = 0; i < n; i++)
        if (abs(*(a + i)) % 2 == 0)
        {
            XoaPhanTu(a, n, i);
            i--;
        }
    a = (int *)realloc(a, n * sizeof(int));
    cout << "\nMang sau khi xoa: ";
    XuatMang(a, n);
}

int main(int argc, char const *argv[])
{
    int n, *a;
    cout << "Nhap n = ";
    do
    {
        cin >> n;
        if (n <= 2 || n >= 50)
            cout << "Nhap lai n = ";
    } while (n <= 1 || n > 30);

    // cấp phát đủ sài
    a = (int *)malloc(n * sizeof(int));
    // a = (int*) calloc(n, sizeof(int));

    if (a == NULL)
    {
        cout << "Khong the cap phat!";
        exit(0);
    }

    NhapMang(a, n);
    cout << "Mang vua nhap la: ";
    XuatMang(a, n);

    Ahihi(a, n);
    XoaSoChan(a, n);

    // giải phóng
    free(a);
    return 0;
}
