
#include <iostream>
#include<cmath>
using namespace std;
struct point{
int x,y;
};
float calDistance(point p1,point p2)
{
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    }
    point getpoint()
    {
        point myp;
        cin>>myp.x>>myp.y;
        return myp;
    }
    point getpoint(int x,int y)
    {
        point myp;
        myp.x=x;
        myp.y=y;
    
    return myp;
    }
    int main()
    {
        int px,py;
        point p1=getpoint();
        cin>>px>>py;
        point p2=getpoint(px,py);
        float d=calDistance(p1,p2);
        cout<<"D:"<<d;
        return 0;
    }
