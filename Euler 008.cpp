#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        long long ans = 0;
        for(long long i=0;i<=n-k;i++){
            long long curr = 1;
            for(long long j=i;j<i+k;j++){
                curr = curr * (s[j]-'0');
            }
            ans = ans>curr ?  ans : curr;
        }
        cout<<ans<<endl;
    }
    return 0;
}
