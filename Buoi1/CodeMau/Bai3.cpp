#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int m, n;      
    cout<<"Nhap so nguyen n: ";   cin>>n;
    cout<<"Nhap so nguyen m: ";   cin>>m;
    float x, y;
    cout<<"Nhao so thuc x: ";   cin>>x;
    cout<<"Nhao so thuc y: ";   cin>>y;
    if ( n > m )
        cout<<"Co "<<n<<" co cho"<<endl;
    else 
        cout<<"Co "<<m<<" con meo"<<endl;
    

    if ( x > y )
        cout<<"gau gau "<<x<<" lan"<<endl;
    else 
        cout<<"meo meo "<<y<<" lan"<<endl;
    return 0;
}
