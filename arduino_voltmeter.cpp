#include<iostream>
using namespace std;

float voltage(float n){
    
    //dividing voltage by 3 using resistors

    float v= (n/1024)*5*3;

    return v;
}

int Percentage3sLiPo(float v){

    if (v>12.60){
        return 999;
    }
    else if(v>12.45){
        return 100;
    }
    else if(v>12.33){
        return 95;
    }
    else if(v>12.24){
        return 90;
    }
    else if(v>12.06){
        return 85;
    }
    else if(v>11.94){
        return 80;
    }
    else if(v>11.85){
        return 75;
    }
    else if(v>11.73){
        return 70;
    }
    else if(v>11.61){
        return 65;
    }
    else if(v>11.55){
        return 60;
    }
    else if(v>11.52){
        return 55;
    }
    else if(v>11.46){
        return 50;
    }
    else if(v>11.40){
        return 45;
    }
    else if(v>11.37){
        return 40;
    }
    else if(v>11.31){
        return 35;
    }
    else if(v>11.25){
        return 30;
    }
    else if(v>11.19){
        return 25;
    }
    else if(v>11.13){
        return 20;
    }
    else if(v>11.07){
        return 15;
    }
    else if(v>11.06){
        return 10;
    }
    else if(v>11.05){
        return 5;
    }
    else if(v<11.05){
        return 0;
    }
    else {
        return -1;
    }

}

int main(){
    int n;
    float v;
    cin>>n;
    v=voltage(n);
    cout<<"battery capacity is little less than "<<Percentage3sLiPo(v)<<endl;
    cout<<"battery voltage is "<<v<<endl;
}