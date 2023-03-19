//نفعكم الله ووفقكم -ادع لي-
//اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
//اللهم اطمس على أعداء الدين والمدنسين -الصهاينة اللصوص-
//اللهم حرر فلسطين من كيد الصهاينة واجعل كيدهم في نحورهم
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define multi_ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

template<class T>
bool ckmax(T &a, const T &b) { return b > a ? a = b, 1 : 0; }
template<class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }

typedef long long ll;
const int N = 2e5+9, M = 2e5 + 6, MOD = 1e9+7, OO = 0x3f3f3f3f, SQR = 320;
const ll LOO = 0x3f3f3f3f3f3f3f3f;
const long double eps = 1e-7;
int dx[8]={0, 0, 1, -1, 1, -1, -1, 1};
int dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
bool valid(int x, int y, int nnn, int mmm){return x>=0&&x<nnn&&y>=0&&y<mmm;}
int Log2(int x) {return 31-__builtin_clz(x);}
ll calc(ll n){
    return n*(n+1)/2;
}
ll solve(string &a, string &b, set<char>&st){
    ll sum=0, cur=0;
    for(int i=0;i<a.size();i++)
        if(a[i]!=b[i] && st.count(a[i]) || a[i]==b[i]) cur++;
        else sum+=calc(cur), cur=0;
    sum+=calc(cur);
    return sum;
}
void TT(){
    ll ans=0;
    int n, k;
    cin>>n>>k;
    string a, b;
    cin>>a>>b;
    vector<int>freq(26, 0);
    for(int i=0;i<n;i++) if(a[i]!=b[i]) freq[a[i]-'a']++;
    vector<char>q;
    for(char c='a';c<='z';c++) if(freq[c-'a']) q.push_back(c);
    for(int i=0;i<(1<<(int(q.size())));i++) {
        set<char> temp;
        for (int j = 0; j < q.size(); j++) {
            if (i & (1 << j) && temp.size()<k)
                temp.insert(q[j]);
        }
        ans=max(ans, solve(a, b, temp));
    }
    cout<<ans<<'\n';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    FAST
    int testCases = 1;
    cin >> testCases;
    while (testCases--) TT();
    return 0;
}
// You Got this! Bear those in mind:
//      * Read the problem Carefully
//      * BrainStorm & Think Twice, code once.
//      * Overcome Corner Cases.
//      * Have a quick revision of the code before submitting
