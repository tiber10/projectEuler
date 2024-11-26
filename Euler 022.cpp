#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<string> v;
    map<string,int> mp;  
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        int x = 0;
        for(int j=0;j<v[i].length();j++){
            x += (v[i][j] - 'A' + 1);
        }
        mp[v[i]] = (x * (i+1));
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<mp[s]<<endl;
    }
    return 0;
}
