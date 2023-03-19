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
const int N=2e4+9, M=1e7+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-7;
 
void solve() {
    ll n,k,sol=LONG_LONG_MAX;
    cin>>n>>k;
    vector<ll>arr(n);
    for(ll &i:arr) cin>>i;
    sort(arr.begin(), arr.end());
    vector<ll>v(n);
    v[0]=arr[0];
    for(ll i=1;i<n;i++) v[i]=v[i-1]+arr[i];
    if(v[n-1]<=k) sol=0;
    for(ll i=0;i<n;i++){
        ll st=-1e12,e=arr[0],mid,ans=-LOO,newSum;
        while(st<=e){
            mid=(st+e)>>1;
            newSum=v[i]-v[0]+1ll*mid*(n-i);
            if(newSum<=k){
                ans=mid;
                st=mid+1;
            }
            else e=mid-1;
        }
        sol=min(sol,(n-i-1)+arr[0]-ans);
    }
    cout<<sol<<endl;
}
 
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCases = 1;
    cin>>testCases;
    while (testCases--)
        solve();
    return 0;
}
