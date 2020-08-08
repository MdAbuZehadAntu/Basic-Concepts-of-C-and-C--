#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
   // cout<<(int *)malloc(5*sizeof(int));
    p=(int *)malloc(5*sizeof(int));

    cout<<*p;



    delete[]p;
    p=NULL;

    //cout<<*p;

    return 0;
}
