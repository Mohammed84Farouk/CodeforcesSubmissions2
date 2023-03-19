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
    int cnt=0, cnt1=0;
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==1) cnt1++;
        else cnt++;
    }
    cout<<cnt+(cnt1+1)/2<<'\n';
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
