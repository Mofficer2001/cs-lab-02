#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A, B :" << endl;
    int a,b,min;
    cin>>a>>b;
    min=a;
    if (min>b) min=b;
    cout<<"min (A,B) ="<<min ;
    return 0;
}
