#include<bits/stdc++.h>
using namespace std;


int find_index(int a[],int n)
{
    int aa,b,c;
    bool ans = false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[i]+a[j]==a[k])
                {
                    aa=i+1;
                    b=j+1;
                    c=k+1;
                    ans = true;
                    if(aa<b && b<c)
                    cout<<aa<<" "<<b<<" "<<c<<endl;
                }
            }
        }
    }

    if(!ans)
    cout<<"No sequence found!!"<<endl;

    return 0;

}


int main()
{
    int t;cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>> a[i];
        }

        find_index(a,n);
        
        return 0;
    }
}