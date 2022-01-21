#include<iostream>
using namespace std;

int measurement,desiredValue,setpoint,getpoint,previousError=0;

int error=measurement-desiredValue;

int dt(int d,int previousError=0){

}

int prop(){
    int p=0,kp=1;
    p=kp*error;

    return p;
}

int dif(){
    int d=0,kd=1;
    
    d=kd*error-previousError;

    return d;
}

int itg(){
    int i=0,ki=1;
    i=ki*error;

    return i;
}

int main(){
previousError=error;

return 0;
}