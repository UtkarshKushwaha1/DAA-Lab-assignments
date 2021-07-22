#include<iostream>
using namespace std;

static int count=0;
int find_element(int a[],int start,int end,int e)
{
    int mid=(start+end)/2,c,f=0;

    if(e==a[mid])
    {   f=1;
        ::count++;
        c=::count;
        ::count=0;
        return c;
    }

    else if(e>a[mid])
    {   ::count++;
        return find_element(a,mid+1,end,e);
    }

    else if(e<a[mid])
    {   ::count++;
        return find_element(a,0,mid,e);
    }
    
    else if(f==0)
        return -1;
}

int main()
{
    int t,n;cin>>t;

    while(t--)
    {   int ans;
        int e;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        cin>>e;

        ans=find_element(a,0,n-1,e);

        if(ans==-1)
        cout<<"Not Present "<<ans<<endl;

        else
        cout<<"Present"<<ans<<endl;
    }

    return 0;
}