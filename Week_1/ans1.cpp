#include<iostream>
using namespace std;

int main()
{
    int t,n,c,e;
    cin>>t;

    while(t--)
    {   
        cin>>n;
        int a[n],f=0;

        for(int i=0;i<n;i++)
            cin>>a[i];

        cin>>e;
        c=0;
        for(int i=0;i<n;i++)
        {   c++;
            if(e==a[i])
            {
                f=1;
                break;
            }
        }
        
        if(f==1)
        cout<<"Present "<<c<<endl;
        
        else
        cout<<"Not Present "<<c<<endl;

      
    }

      return 0;

}