#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A, B :" << endl;
    double a,b,max;
    cin>>a>>b;
    /*cout<<"A / B ="<<(int)(a/b);*/
    max=a;
    if (max<b) max=b;
    cout<<"max (A,B)="<<max ;
    return 0;
}
