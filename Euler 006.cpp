#include <bits/stdc++.h>

using namespace std;



int main()
{
   int t;
   cin>>t;
   while(t--){
       long long N;
       cin>>N;
       long long ans2 = (N*(N+1)*(2*N+1)/6);
       long long ans1 = (N*(N+1)/2) * (N*(N+1)/2);
       cout<<ans1-ans2<<endl;
       
   }
    return 0;
}
