#include <iostream>
using namespace std;

int main()
{
    int n,i,s,c,e;
    cout<<endl<<"Enter starting range :";
    cin>>s;
    cout<<endl<<"Enter ending range:" ;
    cin>>i;

    for(n=s;n<=e;n++)
    {
        c=0;
        for (i=1;i<=n;i++)
           {
              if(n%i==0);
              c++;
           }
    if(c==2)
       cout<<" "<<n;      

    }

    return 0;
 

}