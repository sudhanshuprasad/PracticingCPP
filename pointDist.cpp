#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x,y;
    friend float dist(point p1, point p2);
    public: void setPoint(int x, int y){
            this->x=x;
            this->y=y;
        }
};

float dist(point p1, point p2){
    float d;
    d=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    return d;
}

main(){
    int x,y;
    point p1,p2;
    
    cin>>x>>y;
    p1.setPoint(x,y);
    cin>>x>>y;
    p2.setPoint(x,y);
    
    cout<<dist(p1,p2);
}