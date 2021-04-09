#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int index = 1;
    for (int i = -50; i <= 50; i++)
    {
        if ( index % 5 == 0 && index % 3 == 0)
            cout<<"fizzbuzz";
        else if ( index % 5 == 0 )
            cout<<"buzz";
        else if ( index % 3 == 0 )
            cout<<"fizz";
        else
            cout<<i;
        cout<<" ";
        index++;
    }
    
    return 0;
}
