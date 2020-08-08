#include<bits/stdc++.h>

using namespace std;

void swap(int &r1,int &r2)
{

    r1=r1+r2;
    r2=r1-r2;
    r1=r1-r2;
}

int main()
{
    int a=10,b=20;
    swap(a,b);

    cout<<a<<endl<<b;
    return 0;
}
