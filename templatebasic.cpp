#include<bits/stdc++.h>
#include<iostream>
using namespace std;

template<class T>
class arith
{
    private:
        T a;
        T b;
    public:
        arith(T a,T b);
        T add();
        T sub();

};

template<class T>
arith<T>::arith(T a,T b){this->a=a;this->b=b;}
template<class T>
T arith<T>::add(){return a+b;}
template<class T>
T arith<T>::sub(){return a-b;}

int main()
{
     arith<int> ar(10,5);
     arith<string> b("abc","ab");

     cout<<b.add()<<endl;
     cout<<ar.sub()<<endl;

     return 0;
}
