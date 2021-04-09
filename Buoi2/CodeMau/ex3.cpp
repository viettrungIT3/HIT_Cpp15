#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Nhap n = ";  cin>>n;
    if ( n < 1 )
    {
        cout<<"Khong hop le.";
        return 0;
    }
    for (int  i = 1; i <= n; i++)
    {
        if ( i % 2 == 1)
            cout<<"Hoang xin loi em "<<i<<" lan."<<endl;
        else 
            cout<<"Anh khong the bien mua ha thanh dong nen cung khong the khien em ve ben anh. Xin loi em that nhieu Sorry baby "<<endl;
    }
    
    
    return 0;
}
