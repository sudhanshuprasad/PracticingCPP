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
    // cout<<min<<" ";
    // cout<<b.size()<<" ";
    for(int i=1;i<a.size();i++){
        if(min>a[i]){
            // cout<<min<<" ";
            min=a[i];
        }
    }
    return min;
}

int min(vector<int> a, vector<int> b){
    int min=a[0];
    // cout<<min<<" ";
    // cout<<b.size()<<" ";
    for(int i=1;i<a.size();i++){
        if(min>a[i]){
            // cout<<min<<" ";
            min=a[i];
        }
    }
    // cout<<min<<" ";
    for(int i=0;i<b.size();i++){
        if(min>b[i]){
            min=b[i];
        }
    }
    // cout<<min<<" ";    
    return min;
}
int max(vector<int> a, vector<int> b){
    int max=a[0];
    // cout<<min<<" ";
    for(int i=1;i<a.size();i++){
        if(max<a[i]){
            // cout<<min<<" ";
            max=a[i];
        }
    }
    // cout<<min<<" ";
    for(int i=0;i<b.size();i++){
        if(max<b[i]){
            max=b[i];
        }
    }
    // cout<<max<<" ";    
    return max;
}

int getTotalX(vector<int> a, vector<int> b) {
    int count=0;
    // max(a,b);
    // for(int i=min(a,b);i<max(a,b);i++){
    //     for(int j=0;j<=0;j++){
    //         bool is_a=1, is_b=1;
    //         if(i%a[j]!=0){
    //             is_a=0;
    //             cout<<"i="<<i<<" "<<"a"<<j<<"="<<a[j]<<" "<<"\t"; 
    //             // cout<<"\n";
    //         }
    //         if(i%b[j]!=0){
    //             is_b=0;
    //             cout<<"b"<<j<<"="<<b[j]<<"\t";
                
    //         }
    //         if(is_a==1 && is_b==1){
    //             count++;
    //             cout<<"count="<<count<<"\n";
    //         }cout<<"\n";
    //     }
    // }

    int i=min(a,b);
    while(i<max(a,b)){
        // int j=0;
        bool check_i=1;// check_b=1;
        for(int j=0;j<a.size();j++){
            if(i%a[j]!=0){
                check_i=0;
                cout<<i<<"%"<<"a"<<j<<endl;
            }
            // j++;
        }
        // j=0;
        for(int j=0;j<a.size();j++){
            if(i%b[j]!=0){
                check_i=0;
                cout<<i<<"%"<<"b"<<j<<endl;
            }
            // j++;
        }
        cout<<"check";
        if(check_i){
            count++;
            cout<<"count="<<count;
        }
        // if(check_b){
        //     count++;
        //     cout<<"count="<<count;
        // }
        cout<<endl;
        i++;
    }

    return count;
}

int main()
{
    vector<int> a={3,4};
    vector<int> b={24,48};

    // cout<<"hello";
    cout<<getTotalX(a,b);
}
 