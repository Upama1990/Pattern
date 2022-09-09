#include <iostream>
using namespace std;
int main()
{
    int i,j,k=1,n;
    cout<<endl<<"Enter the no of lines in pattern :";
    cin>>n;

     for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
         cout<<"  "<<k++;
    

        }

     cout<<endl;  
    }
       

    

return 0;  
       
}