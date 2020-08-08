#include<bits/stdc++.h>



using namespace std;

int * fun(int n)
{
    int *p;

    p=(int *)malloc(n*sizeof(int));
    return p;
}

int main()
{
    int *p;
    int n;
    cout<<"Size :";
    cin>>n;
    p=fun(n);
    cout<<*(&p+1)-p;
    return 0;
}
