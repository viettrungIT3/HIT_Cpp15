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

bool Check(int number)
{
	if (number >= 0 && number <= 9)
		return true;
	while (number >= 10)
	{
		if ((number % 10) != (number % 100) / 10 + 1)
			return false;
		number /= 10;
	}
	return true;
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

    int *b = a;
    int nb = n;

    cout << "\nday can hien thi: ";
    for (int i = 0; i < nb; i++)
    {
        if (Check(*(b+i)))
        {
            cout<<*(b+i)<<" ";
        }
        
    }

    // giải phóng
    free(a);
    free(b);
    return 0;
}
