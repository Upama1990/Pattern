#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<endl<<"Enter the no of lines in pattern :";
    cin>>n;

    for (i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
            cout<<"   "<<j%2;
        cout<<endl;    
    }

return 0;  
       
}