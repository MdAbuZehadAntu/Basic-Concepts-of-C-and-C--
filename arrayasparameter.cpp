#include<bits/stdc++.h>



using namespace std;

void ar(int *arr,int len)
{
    int x=0;
    for(int i=len-1;i>=(len)/2;i--)
    {

        arr[i]=arr[i]+arr[x];
        arr[x]=arr[i]-arr[x];
        arr[i]=arr[i]-arr[x++];

    }
}



int main()
{
    int arr[]={19,2,3,4,5,6};




    ar(arr,*(&arr+1)-arr);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
