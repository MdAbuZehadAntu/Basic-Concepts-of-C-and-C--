

#include<bits/stdc++.h>

using namespace std;

class rect{
private:
    int len,wid;
public:
    rect(int len,int wid)
    {
        this->len=len;
        this->wid=wid;
    }
    int area()
    {
        return len*wid;
    }



};


int main()
{
    rect r(10,5);
    cout<<r.area();
    return 0;
}
