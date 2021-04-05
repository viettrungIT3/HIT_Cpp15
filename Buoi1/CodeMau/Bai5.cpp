#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n, a;
    cout << "Nhap chieu dai cua san choi: ";
    cin >> m;
    cout << "Nhap chieu rong cua san choi: ";
    cin >> n;
    cout << "Nhap canh cua vien gach: ";
    cin >> a;

    /*
    Ta co: chieu dai cua san can it nhat x vien gach
    trong do: 
        x = m / a       neu m % a == 0 
        x = m / a + 1   neu m % a != 0 
    tuong tu chieu rong
    */

    int tonggach1 = 0;
    int tonggach2 = 0;
    if (m % a == 0)
        tonggach1 += m / a; //tonggach1 = tonggach1 + m / a;
    else
        tonggach1 += m / a + 1;
    if (n % a == 0)
        tonggach2 += n / a; //tonggach2 = tonggach2 + n / a;
    else
        tonggach2 += n / a + 1;

    cout << "so vien gach can dung: " << tonggach1 * tonggach2 << endl;
    return 0;
}
