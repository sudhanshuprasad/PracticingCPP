#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int min(vector<int> a){
    int min=a[0];
    for(int i=1;i<a.size();i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}

int max(vector<int> a){
    int max=a[0];
    for(int i=1;i<a.size();i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}

int gcd_of_two_num(int a, int b){
    if(b==0){
        return a;
    }
    return gcd_of_two_num(b,a%b);
}

int gcd(vector<int> n){
    int gcd=n[0];
    for (int i = 1; i < n.size(); i++){
        gcd=gcd_of_two_num(n[i],gcd);
    }
    return gcd;
}

int lcm(vector<int> n){
    int lcm=n[0];
    int gcd=n[0];
    for (int i = 1; i < n.size(); i++){
        gcd=gcd_of_two_num(n[i], lcm);
        lcm=(lcm*n[i]/gcd);
    }
    
    return lcm;
}

int getTotalX(vector<int> a, vector<int> b) {
    int count=0,i=2;
    int start=lcm(a),end=gcd(b);
    // cout<<start<<endl;
    // cout<<end<<endl; 
    while (start*i<end){
        // cout<<(start*i)%end<<endl;
        if ((start*i)%end==0){
            count++;
        }
        // cout<<"hello";    
        i++;
    }
    
    return count;
}

int main()
{
    vector<int> a={3,4};
    vector<int> b={24,48};
    // cout<<lcm(a);
    cout<<getTotalX(a,b);
}