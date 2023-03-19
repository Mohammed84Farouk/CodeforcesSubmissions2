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
void visualize(vector<set<int>>&graph, int n);
 
void solve() {
    int n,ans=0;
    cin>>n;
    map<int,int>freq;
    bool flag=false;
    while(n--){
        int x;
        cin>>x;
        if(x==0) flag=true;
        if(x!=0&&freq[x]==0){
            freq[x]++;
            ans++;
        }
        else if(x!=0&&freq[x]==1&&freq[-x]==0)
        {
            ans++;
            freq[-x]++;
        }
    }
    cout<<ans+flag<<endl;
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
 
void visualize(vector<set<int>>&graph, int n){
    for(int edge=0;edge<n;edge++){
        cout<<edge<<": ";
        for(auto x:graph[edge])
            cout<<x<<" ";
        cout<<endl;
    }
}