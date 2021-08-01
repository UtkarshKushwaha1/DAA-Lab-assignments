#include<bits/stdc++.h>
using namespace std;

int c=0;

int search(int a[],int n,int e)
{  int i=0,c=0;
   while (a[i]<=e)
   {
       if(a[i]==e)
       {
           c++;
       }
       i++;
   }
   
   if(c>0)
    return c;

    return -1;
}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int e;
        cin>>e;
        
        c=search(a,n,e);

        if(c>0)
        cout<<e<<"-"<<c<<endl;

        else    
            cout<<"Key not present"<<endl;
    }
    
    return 0;
}