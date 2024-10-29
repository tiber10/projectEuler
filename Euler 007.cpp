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
    vector<int> v;
    v.push_back(2);
    int cnt = 3;
    while(v.size()<10000){
        if(isPrime(cnt)){
            v.push_back(cnt);
        }
        cnt++;
    }
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<v[x-1]<<endl;
    }
    return 0;
}

