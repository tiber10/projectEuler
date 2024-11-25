#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long d(long n){
    long sum = 1;
    for(long i = 2;i*i<n;i++){
        if(n%i==0){
            sum += i;
            sum += (n/i);
        }
    }
    long x = sqrt(n);
    if(x*x == sqrt(n)){
        sum += x;
    }
    return sum;
}

int main() {
    long t;
    cin>>t;
    vector<int> v(100000,0);
    int curr = 0;
    for(long a=3;a<100000;a++){
        long b = d(a);
        v[a] = curr;
        if(b!=a && a==d(b)){
            curr +=a ;
        }
    }
    while(t--){
        long n;
        cin>>n;
        cout<<v[n]<<endl;
        
    } 
    return 0;
}
