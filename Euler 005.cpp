#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long res = 1;
        for(int i = 2; i<=n;i++){
            res = lcm(res,i);
        }
        cout<<res<<endl;
    }  
    return 0;
}
