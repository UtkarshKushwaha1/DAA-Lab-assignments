#include<iostream>
using namespace std;

int main()
{
    int n,key,ind,f=0,c=0;
    cout<<"Size of array:";
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<"\nEnter Key:";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        c++;
        if(a[i]==key)
        {
            ind=i;
            f=1;
            break;
        }
    }

    if(f==0)
    cout<<"Element not found!!";

    else{
        cout<<"Element found at index "<<ind<<" !!";
        cout<<"\nTotal numbers of comparisons: "<<c;
    }

    
    return 0;
}