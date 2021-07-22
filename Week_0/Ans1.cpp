#include<iostream>
#include<fstream>
using namespace std;

void linear_search(int *a,int n,int ele)
{   
    int count=0,f=0;

    fstream output;
    output.open("ouput.txt",ios::app);

    for(int i=0;i<n;i++)
    {   count++;
        if(a[i]==ele)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    output<<"Present!\n"<<count<<" times compared!"<<endl;

    else
    output<<"Not Present!\n"<<count<<" times compared!"<<endl;

    output.close();

}

int main()
{
    fstream input;

    input.open("input.txt", ios::in);
    if(!input)
    {
        cout<<"Invalid file!";
        exit(1);
    }

    int t,n,ele;
    input>>t;

   
    while(t--)
    {   
        input>>n;

        int a[n];

        for(int i=0;i<n;i++)
            input>>a[i];
        
        input>>ele;

        linear_search(a,n,ele);
   }
   input.close();

   return 0;

}