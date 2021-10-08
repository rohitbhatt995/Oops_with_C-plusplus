// Check a given number is Odd or Even
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:\n";
    cin>>num;
    if(num % 2 == 0)
    {
        cout<<num<<"is a even number"<<endl;
    }
    else
    {
        cout<<num<<"is a odd number"<<endl;
    }

    return 0;
}