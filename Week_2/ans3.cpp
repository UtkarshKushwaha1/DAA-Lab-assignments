#include<bits/stdc++.h>
using namespace std;


int find_key_count(int a[],int n,int key)
{
    int c=0;
    bool ans = false;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]-a[j]==key)
            {c++;
            ans=true;}
        }
    }

    if(c>0)
    {
        cout<<c<<endl;
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

        int key;
        cin>>key;

        find_key_count(a,n,key);
        
        return 0;
    }
}