#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}

int main()
{
    int a=10;
    int b=20;

    swap(&a,&b);
    cout<<a<<endl<<b;

    return 0;
}
