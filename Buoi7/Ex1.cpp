#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    char HoTen[30];
    int Tuoi;
    float DiemToan;
    float DiemHoa;
    float DiemLy;
};

void NhapSV(SinhVien &sv)
{
    cout << "  Nhap ho ten: ";
    fflush(stdin);
    gets(sv.HoTen);
    cout << "  Nhap tuoi: ";
    cin >> sv.Tuoi;
    cout << "  Nhap diem toan: ";
    cin >> sv.DiemToan;
    cout << "  Nhap diem ly: ";
    cin >> sv.DiemLy;
    cout << "  Nhap diem hoa: ";
    cin >> sv.DiemHoa;
}

void NhapDS(SinhVien a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap sinh vien thu "<<i+1<<endl;
        NhapSV(a[i]);
    }
}

void HienThiDS(SinhVien a[100], int n)
{
    cout << setw(30) << left << "Ho ten" << setw(10) << "Tuoi" << setw(10) << "Diem toan"
         << setw(10) << "Diem hoa" << setw(10) << "Diem ly" << setw(10) << "Diem TB" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << setw(30) << left << a[i].HoTen << setw(10) << a[i].Tuoi << setw(10) << a[i].DiemToan
             << setw(10) << a[i].DiemHoa << setw(10) << a[i].DiemLy << setw(10) << (a[i].DiemToan + a[i].DiemHoa + a[i].DiemLy) / 3.0 << endl;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Nhap n = ";
    do
    {
        cin >> n;
        if (n < 2)
            cout << "Nhap lai n = ";
    } while (n < 2);

    SinhVien a[n+5];

    NhapDS(a, n);
    HienThiDS(a, n);

    return 0;
}
