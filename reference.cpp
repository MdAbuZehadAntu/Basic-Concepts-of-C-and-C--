
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10;
    int &r=a;

    cout<<r<<endl;
    r++;
    cout<<a;
    return 0;
}
