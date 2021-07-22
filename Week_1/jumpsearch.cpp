#include<iostream>
#include<math.h>
using namespace std;

void jump_search(int a[],int e,int n)
{
    int start=0,c=0,f=0;
    int end=sqrt(n);

    while(a[end]<=e && end<n)
    {   c++;
        start=end;
        end+=sqrt(n);
        if(end>n-1)
            end=n;
    } 

    for(int i=start;i<end;i++)
    {   c++;
        if(a[i]==e)
        {   f=1;
            cout<<"Present "<<c<<endl;
        }
    }

    if(f==0)
    cout<<"Not Present "<<c<<endl;
}

using namespace std;

int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        int e;
        cin>>e;

        jump_search(a,e,n);
    }
    return 0;
}