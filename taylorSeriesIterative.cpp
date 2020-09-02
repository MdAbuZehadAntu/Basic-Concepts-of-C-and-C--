
#include<bits/stdc++.h>
using namespace std;

double fun(int x,int n)
{

    double de=1;
    double nu=1;
    double res=1;;

    for(int i=1;i<=n;i++)
    {
        nu*=x;
        de*=i;
        res+=nu/de;

    }
    return res;
}

int main(){

    cout<<fun(1,10);

return 0;
}
