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
const int N=1e2+9, M=1e7+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-7;
void visualize(vector<vector<int>>&graph, int n);

void solve() {
    int n,ans=INT_MAX;
    cin>>n;
    vector<int>v(n);
    for(int &i:v) cin>>i;
    if(n==1){
        cout<<"0\n";
        return;
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            int cnt=0;
            for(int k=0;k<n;k++)
                if((v[i]-v[j])*(k-i)!=(v[k]-v[i])*(i-j))
                    cnt++;
                ans=min(ans,cnt);
        }
    cout<<ans<<'\n';
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