#include<bits/stdc++.h>

using namespace std;

struct rect{
int h;
int w;

};

int main()
{
   /* struct rect r={10,5};
    struct rect *p=&r;

    cout<<(*p).h<<endl;
    (*p).h=9;
    p->h=77;
    cout<<r.h;*/

    struct rect *p;
    p=(struct rect *)malloc(sizeof(struct rect(*)));
    p->h=5;
    p->w=2;

    cout<<(*p).h;




    return 0;
}
