/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
using namespace std;
typedef long long ll;
const int N=2e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

void solve() {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    deque<int>dq;
    if(v[0]==n){
        dq.push_back(n);
        int cnt=1;
        for(int i=1,bc=n-1;cnt<n;cnt++){
            if(v[i]<v[bc])
                dq.push_front(v[i]),i++;
            else dq.push_back(v[bc]),bc--;
        }
        for(int x:dq) cout<<x<<" ";
        cout<<'\n';
    }
    else if(v[n-1]==n){
        dq.push_back(n);
        int cnt=1;
        for(int i=0,bc=n-2;cnt<n;cnt++){
            if(v[i]<v[bc])
                dq.push_front(v[i]),i++;
            else dq.push_back(v[bc]),bc--;
        }
        for(int x:dq) cout<<x<<" ";
        cout<<'\n';
    }
    else cout<<"-1\n";
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
