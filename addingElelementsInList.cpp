#include<bits/stdc++.h>
#include<list>

using namespace std;

int main()
{
    std::list<int> lst;
    int n;

    for(int i=0;i<5;i++)
    {
        cout<<"Enter "<<i+1<<" no. element : ";
        cin>>n;
        cout<<endl;
        lst.push_back(n);
    }

    for(int i:lst)
    {
        std::cout<<i<<",";
    }
    std::cout<<std::endl;
     return 0;
}
