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

void TT(){
    int n;
    cin>>n;
    multiset<pair<ll, int>>st;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        st.insert({x, i});
    }
    int ans=0;
    while(st.size()!=1){
        auto x=*st.begin();
        st.erase(x);
        if(st.begin()->first==x.first){
            st.erase(st.begin());
            st.insert({x.first*2, x.second});
        }
        else if(st.begin()->first>=x.first*2){
            st.insert({x.first*2, x.second});
            ans++;
        }
        else if(st.begin()->first<x.first*2) return void(cout<<"-1\n");
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
//    cin >> testCases;
    while (testCases--) TT();
    return 0;
}
// You Got this! Bear those in mind:
//      * Read the problem Carefully
//      * BrainStorm & Think Twice, code once.
//      * Overcome Corner Cases.
//      * Have a quick revision of the code before submitting
