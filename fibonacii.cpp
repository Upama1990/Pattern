#include <iostream>
#include<iomanip>
using namespace std;
int main()

{
    int i=0, j=1,t,k,n ;
    cout<<endl<<"Enter no of digits in series :";
    cin>>n;

    cout<<endl<<"FIBONACII SERIES" <<endl;
    cout<<setw(3)<<i<<setw(3)<<j;
    for(k=3;k<=n;k++)
    {
        t=i+j;
        cout<<setw(3)<<t;

        i=j;
        j=t;

    }

    return 0;


}