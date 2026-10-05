#include <bits/stdc++.h>
using namespace std;

vector<string> rotate(string s){
        vector<string>val;
        int n=s.size();
        for(int i=0;i<n;i++){
            string ans=s;
            ans+=s[i];
            ans.erase(0,i+1);
            val.push_back(ans);
            
        }
        return val;
    }

int main() {
#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
#endif

   string ans="100011001";
   vector<string> store;
   for(int i=0;i<ans.size();i++){
    int cntone=0;
    for(int j=i;j<ans.size();j++){
        if(cntone==3){
            string val=ans.substr(i,j+1);
            store.push_back(val);
            break;
        }

        if(ans[j]=='1'){
            cntone++;
        }
    }
    sort(ans.begin(),ans.end(),greater<>();
    cout<<ans.size();
           
   }

    return 0;
}
