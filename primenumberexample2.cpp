#include <iostream>
using namespace std;
int main()

{
    int n,i,c=0;

    cout<<endl<<"enter a number" ;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
             c++;


    }
    if(c==2)
    cout<<endl<<n<<" is a prime number ";
    else
    cout<<endl<<n<< " is not a prime number ";

    return 0;

    
}