#include<iostream>
using namespace std;

bool binary_search(int a[],int s,int n,int e)
{   
    int mid = (s+n)/2;
    if(e==a[mid])
        return true;
    
    else if(e>a[mid])
        binary_search(a,mid+1,n,e);
    else  if(e<a[mid])
        binary_search(a,0,mid,e);
    return false;
}

int search(int a[],int n,int e)
{   int c=0;
    bool ans = binary_search(a,0,n,e);
    if(ans)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==e)
                    c++;
            }
        }

        return c;
}

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
       cin>>n;
       int a[n];

       for(int i=0;i<n;i++)
        cin>>a[i];

        int e;
        cin>>e;

        int c=search(a,n-1,e);
        cout<<e<<"-"<<c<<endl;
    }

    return 0;
}