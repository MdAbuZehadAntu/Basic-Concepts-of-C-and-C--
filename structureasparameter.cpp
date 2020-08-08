#include<bits/stdc++.h>



using namespace std;

struct rect{
int h[100],r;

};

int area(struct rect *r)
{
    return r->h[0]*r->r;
}

int main()
{
    struct rect r={{5,6,7},8};
    cout<<"Area = "<<area(&r);
    return 0;
}
