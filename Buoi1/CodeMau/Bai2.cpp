#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;      
    cout<<"Nhap so nguyen duong a: ";   cin>>a;
    cout<<"Nhap so nguyen duong b: ";   cin>>b;
    cout<<"\t a + b = "<<a+b<<endl;
    cout<<"\t a - b = "<<a-b<<endl;
    cout<<"\t a * b = "<<a*b<<endl;
    cout<<"\t a % b = "<<a%b<<endl;
    cout<<"\t a / b = "<<fixed<<setprecision(2)<<(float)a/b<<endl;     
    // setprecision dung lam so thap phan và yeu cau can thu vien iomanip 
    return 0;
}
