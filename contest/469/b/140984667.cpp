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
const int N=2e3+9, M=1e7+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-7;

void solve() {
    int p,q,l,r,mx=0;
    cin>>p>>q>>l>>r;
    int arr[N]={0};
    while(p--){
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b+1]--;
        mx=max(mx,b);
    }
    for(int i=1;i<=mx+1;i++) arr[i]+=arr[i-1];
    set<int>ans;
    while(q--){
        int x,y;
        cin>>x>>y;
        for(int i=x;i<=y;i++)
            for(int j=l;j<=r;j++)
                if (arr[i+j])
                    ans.insert(j);
    }
    cout<<ans.size();
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCases = 1;
//    cin>>testCases;
    while (testCases--)
        solve();
    return 0;
}

/*
vector<vector<int>>graph;
void visualize(int n){
    for(int edge=0;edge<n;edge++){
        cout<<edge<<": ";
        for(auto x:graph[edge])
            cout<<x<<" ";
        cout<<endl;
    }
}*/
