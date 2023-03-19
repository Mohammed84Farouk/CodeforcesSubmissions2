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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
//    for(int i:v) cout<<i<<" ";
//    cout<<endl;
    int s=0,s2=0,cnt=1;
    for(int i=0,j=n-1;cnt<=n;cnt++){
        if(v[i]>=v[j]){
            if(cnt&1) s+=v[i];
            else s2+=v[i];
            i++;
        }
        else{
            if(cnt&1) s+=v[j];
            else s2+=v[j];
            j--;
        }
//        cout<<s<<" "<<s2<<endl;
    }
    cout<<s<<" "<<s2;
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