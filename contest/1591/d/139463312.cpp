/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define ordered_set tree<int, null_type, less<int>,rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
typedef long long ll;
const int N=2e5+5, M=27, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
void solve() {
    ordered_set st;
    int n, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int &i: v) {
        cin >> i;
        cnt += st.size() - st.order_of_key(i);
        st.insert(i);
    }
    if (st.size() != n || cnt % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
}
//order_of_key(x)   it tells you how many elements are less than x in your set.
//find_by_order(x)  it tells you the element of index x     =st[x]
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