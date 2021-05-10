#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A, B :" << endl;
    int a,b,max;
    cin>>a>>b;
    max=a;
    if (max<b) max=b;
    cout<<"max ="<<max ;
    return 0;
}
