#include <iostream>

using namespace std;

int main()
{
    int month;
    cout<<"Nhap: ";     cin >> month;
    
    if (month == 1)
        cout << "Thang Mot";
    else if (month == 2)
        cout << "Thang Hai";
    else if (month == 3)
        cout << "Thang Ba";
    else if (month == 4)
        cout << "Thang Tu";
    else if (month == 5)
        cout << "Thang Nam";
    else if (month == 6)
        cout << "Thang Sau";
    else if (month == 7)
        cout << "Thang Bay";
    else if (month == 8)
        cout << "Thang Tam";
    else if (month == 10)
        cout << "Thang Muoi";
    else if (month == 11)
        cout << "Thang Muoi Mot";
    else if (month == 12)
        cout << "Thang Muoi Hai";
    else
        cout << "Khong la 1 thang trong nam";

    cout<<endl;



    // C2:
    switch (month)
    {
    case 1:
        cout << "Thang Mot";
        break;
    case 2:
        cout << "Thang Hai";
        break;
    case 3:
        cout << "Thang Ba";
        break;
    case 4:
        cout << "Thang Tu";
        break;
    case 5:
        cout << "Thang Nam";
        break;
    case 6:
        cout << "Thang Sau";
        break;
    case 7:
        cout << "Thang Bay";
        break;
    case 8:
        cout << "Thang Tam";
        break;
    case 9:
        cout << "Thang Chin";
        break;
    case 10:
        cout << "Thang Muoi";
        break;
    case 11:
        cout << "Thang Muoi Mot";
        break;
    case 12:
        cout << "Thang Muoi Hai";
        break;

    default:
        cout << "Khong la 1 thang trong nam";
        break;
    }
    return 0;
}
