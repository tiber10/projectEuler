#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

long long sum(long long n){
    return (n*(n+1))/2;
}
long long f(long long n){
    map<int,int> factors;
    for(int i=1;i*i<=n;i++){
        if(n % i == 0){
            factors[i] = 1;
            factors[n / i] = 1;
        }
    }
    return factors.size();
}
long long triangle_factors(long long n){
    return n % 2 == 0 ? f(n/2) * f(n+1) : f(n) * f((n+1)/2);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int i=1;
        while(triangle_factors(i) <= n){
            i++;
        }
        cout<<sum(i)<<endl;
    }
    return 0;
}
