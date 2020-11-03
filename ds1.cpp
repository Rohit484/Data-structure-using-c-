#include<iostream>
using namespace std;
int main()
{
     linearSearch(int a,int n)
    {
        int temp =-1;
        for(int i=0;i<5;i++)
        {
            if(a[i]==n)
            {
                cout<<"Element found at position "<<i+1;
                temp=0;
            }
        }
        if(temp==1)
        {
            cout<<"No Element found ";
        }
    }
    int main()
    {
        int arr[5];
        cout<<"Please enter an 5 element of the array ";
        for(int i=0;i<5; i++)
        {
            cin>>arr[i];
        }
        cout<<"please enter an element to search ";
        int num;
        cin>>num;
        linearSearch(arr,num);
        return 0;

    }
}
