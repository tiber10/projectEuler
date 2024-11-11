#include <bits/stdc++.h>
using namespace std;

string sum(string str1, string str2) 
{ 
    str1.erase(0, min(str1.find_first_not_of('0'), str1.size()-1));
    str2.erase(0, min(str2.find_first_not_of('0'), str2.size()-1));
 
    if (str1.empty() && str2.empty()) 
        return "0";
 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
 
    string str = ""; 
    int n1 = str1.length(), n2 = str2.length(); 
    int diff = n2 - n1; 
    int carry = 0; 
    for (int i=n1-1; i>=0; i--) 
    { 
        int sum = ((str1[i]-'0') + 
                (str2[i+diff]-'0') + 
                carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    for (int i=n2-n1-1; i>=0; i--) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
    if (carry) 
        str.push_back(carry+'0'); 
    reverse(str.begin(), str.end()); 
 
    return str; 
} 

int main() {
    int n;
    cin>>n;
    string ans;
    cin>>ans;
    for(int i=1;i<n;i++){
        string s;
        cin>>s;
        ans = sum(ans,s);
    }  
    cout<<string(ans.begin(),ans.begin()+10);
    return 0;
}
