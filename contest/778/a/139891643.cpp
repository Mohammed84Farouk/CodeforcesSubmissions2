/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
typedef long long ll;
const int N=1e6+6, M=1e9+6, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;


void solve() {
    string s,p;
    cin>>s>>p;
    int sz=(int)s.size();
    vector<int>v(sz);
    for(int &i:v){
        cin>>i;
        i--;
    }
    int st=0,e=sz-1,mid,ans=0;
    while(st<=e){
        mid=(st+e)>>1;
        string t=s;
        for(int i=0;i<=mid;i++)
            t[v[i]]='#';
        int cnt=0;
        for(char c:t)
            if(c==p[cnt]&&cnt<p.size())
                cnt++;
//        cout<<"mid: "<<mid<<" "<<t<<" "<<cnt<<" "<<p<<endl;
        if(cnt==p.size()){
            ans=mid+1;
            st=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans;
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tt=1;
//    cin>>tt;
    while(tt--)
        solve();
    return 0;
}