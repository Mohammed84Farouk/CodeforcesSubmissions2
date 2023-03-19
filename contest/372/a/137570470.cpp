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
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
void solve() {
    int n,cnt=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n&&cin>>arr[i];i++);
    sort(arr.begin(),  arr.end());
    for(int i=n/2-1,lst=n-1;i!=-1;i--)
        if(arr[lst]>=2*arr[i])
            cnt++,lst--;
    cout<<n-cnt;
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t=1;
//    cin>>t;
    while(t--)
        solve();
    return 0;
}