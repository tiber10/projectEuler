#include <bits/stdc++.h>

using namespace std;
int isPrime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<=1000000;i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans = 0;
        for(int i: primes){
            if(i<=n){
                ans += i;
            }else{
                cout<<ans<<endl;
                break;
            }
        }
    }
    return 0;
}
