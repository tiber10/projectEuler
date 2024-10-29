#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int ans=-1;
        for(int a=3;a<int(n/3);a++){
            int c = int((n*n+(2*a*a)-(2*n*a))/(2*n - 2*a));
            int b = n-a-c;
            if((a*a + b*b)==(c*c)){
                ans=max(ans,a*c*b);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
