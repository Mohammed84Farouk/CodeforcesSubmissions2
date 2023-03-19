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
const int N=2e5+5, M=27, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    set<int>st;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        st.insert(--arr[i]);
    }
    if(n==1||st.size()!=n){
        cout<<"YES\n";
        return;
    }
    if(n==2){
        if(arr[0]<=arr[1])
            cout<<"YES\n";
        else cout<<"NO\n";
        return;
    }
    vector<int>pos(n);
    for(int i=0;i<n;i++)
        pos[arr[i]]=i;
    for(int i=0;i<n-2;i++){
        if(i==pos[i]) continue;
        int x=pos[i],y=i,z;
        z=(x==n-1)? n-2:n-1;
        swap(arr[x],arr[y]);
        swap(arr[x],arr[z]);
        pos[arr[x]]=x;
        pos[arr[y]]=y;
        pos[arr[z]]=z;
    }
    for(int i=0;i<n;i++)
        if(i!=arr[i]) {
            cout << "NO\n";
            return;
        }
    cout<<"YES\n";
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tt=1;
    cin>>tt;
    while(tt--)
        solve();
    return 0;
}
