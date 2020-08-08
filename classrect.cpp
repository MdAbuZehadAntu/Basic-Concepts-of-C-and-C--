#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int len,wid;
public:
    Rectangle();
    Rectangle(int l,int b);
    int area();
    int perimeter();
    int getlen();
    void setlen(int len);
    ~Rectangle();




};

Rectangle::Rectangle(){len=wid=1;}
Rectangle::Rectangle(int len,int wid){this->len=len;this->wid=wid;}
int Rectangle::area(){return len*wid;}
int Rectangle::perimeter(){return 2*(len+wid);}
int Rectangle::getlen(){return len;}
Rectangle::~Rectangle(){cout<<"done";}

int main()
{
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setlen(30);
    cout<<r.getlen();

    return 0;
}
