#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int anbd(int n){
    int sum = 1;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            sum += i;
            if(n/i != i){
                sum += n/i;
            }
        }
    }
    return sum;
}

int main() {
    int t;
    cin>>t;
    vector<bool> a(28124, false);
    vector<string> v(28124, "NO");
    for(int i=12;i<28124;i++){
        if(anbd(i)>i){
            a[i] = true;
        }
    }
    for(int i=24;i<28124;i++){
        for(int j=12;i-j>=12;j++){
            if(a[j] && a[i-j]){
                v[i] = "YES";
                break;
            }
        }
    }
  
    while(t--){
        int k;
        cin>>k;
        if(k>28123){
            cout<<"YES"<<endl;
        }else{
            cout<<v[k]<<endl;
        }
    }
    return 0;
}
