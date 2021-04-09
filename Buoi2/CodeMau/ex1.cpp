#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 100; i++)
    {
        cout<<setw(3)<<i;
        if ( i % 10 == 9 )
            cout<<endl;
    }
    
    return 0;
}
