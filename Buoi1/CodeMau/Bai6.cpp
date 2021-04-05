#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, s;
    cout << "Nhap so dien: ";
    cin >> a;

    if (a < 50)
        s = 1500 * a;
    else if (a < 100)
        s = 1500 * 50 + 2500 * (a - 50);
    else if (a < 150)
        s = 1500 * 50 + 2500 * 50 + 3500 * (a - 100);
    else if (a < 200)
        s = 1500 * 50 + 2500 * 50 + 3500 * 50 + 4000 * (a - 150);
    else
        s = 1500 * 50 + 2500 * 50 + 3500 * 50 + 4000 * 50 + 5000 * (a - 200);
    cout << "Gia tien dien can phai tra la: " << s <<endl;
    return 0;
}
