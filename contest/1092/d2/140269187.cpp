/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(e) {sort(e.begin(),e.end());e.erase(unique(e.begin(),e.end()),e.end());}
typedef long long ll;
const int N=1e6+9, M=2e3+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

void solve(){
    int n,x,mx=0;
    bool flag=false;
    cin>>n;
    stack<pair<int,int>>stk;
    for(int i=0;i<n&&cin>>x;i++) {
        mx=max(mx,x);
        if (!stk.empty() && stk.top().first == x){
            stk.pop();
            if(!stk.empty()&&x>stk.top().first) flag=true;
        }
        else stk.push({x,i});
    }
    if((int)stk.size()>1 || stk.size()==1&&stk.top().first!=mx||flag) cout<<"NO";
    else cout<<"YES";
}
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCases=1;
//    cin>>testCases;
    while(testCases--)
        solve();
    return 0;
}
