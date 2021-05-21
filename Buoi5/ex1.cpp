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

void SortArr(int *a, int n)
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

bool isPrime(int n)
{
    if (n < 2)
        return false;
    int count = sqrt(n);
    for (int i = 2; i <= count; i++)
        if (n % i == 0)
            return false;
    return true;
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
    --n;
}

void XoaSNT(int *a, int &n)
{
    for (int i = 0; i < n; i++)
    {
        int num = abs(*(a + i));
        int sum = 0;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (isPrime(sum))
        {
            XoaPhanTu(a, n, i);
            i--;
        }
    }
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
    } while (n <= 2 || n >= 50);

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

    SortArr(a, n);
    XoaSNT(a, n);
    cout << "\nMang sau cung la: ";
    XuatMang(a, n);

    // giải phóng
    free(a);
    return 0;
}
