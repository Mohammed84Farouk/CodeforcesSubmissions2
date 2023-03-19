//نفعكم الله ووفقكم -ادع لي-
//اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
//اللهم اطمس على أعداء الدين والمدنسين -الصهاينة اللصوص-
//اللهم حرر فلسطين من كيد الصهاينة واجعل كيدهم في نحورهم

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
//                      dataType,     , sorting,   rbTreeType
#define multi_ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define FAST ios_base::sync_with_stdio(0);cin.tie(0);

template<class T>
bool ckmax(T &a, const T &b) { return b > a ? a = b, 1 : 0; }
template<class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }

typedef long long ll;
const int N = 6e5+9, M = 1e2 + 6, MOD = 1e9+7, MOD2 = 1e9+9, OO = 0x3f3f3f3f, SQR = 320;
const ll LOO = 0x3f3f3f3f3f3f3f3f, MOD1e11 = 100000000057;
const long double eps = 1e-7;
int dx[8]={0, 0, 1, -1, 1, -1, -1, 1};
int dy[8]={1, -1, 0, 0, 1, -1, 1, -1};
bool valid(int x, int y, int nnn, int mmm){return x>=0&&x<nnn&&y>=0&&y<mmm;}
int Log2(int x){return 31-__builtin_clz(x);}
ll pushBack(ll h, ll x, ll p, char c){
    return ((h*x)%p+c)%p;
}
void TT() {
    vector<ll>xp(N), xp2(N);
    xp[0]=xp2[0]=1;
    for(int i=1;i<N;i++){
        xp[i]=(xp[i-1]*207)%MOD;
        xp2[i]=(xp2[i-1]*128)%MOD2;
    }
    int n, m;
    cin>>n>>m;
    set<pair<ll, ll>>hash;
    while(n--){
        string s;
        cin>>s;
        ll h=0, h2=0;
        for(char c:s){
            h=pushBack(h, 207, MOD, c);
            h2= pushBack(h2, 128, MOD2, c);
        }
        hash.insert({h, h2});
    }
    while(m--){
        string s;
        cin>>s;
        ll h=0, h2=0;
        for(char c:s){
            h=pushBack(h, 207, MOD, c);
            h2= pushBack(h2, 128, MOD2, c);
        }
        bool flag=false;
        for(int i=0;!flag&&i<s.size();i++)
            for (char c = 'a'; c <= 'c'; c++)
                if(c!=s[i]) {
                    ll temp = (h - (1ll * s[i] * xp[s.size() - 1 - i]) % MOD + MOD) % MOD;
                    ll temp2 = (h2 - (1ll * s[i] * xp2[s.size() - 1 - i]) % MOD2 + MOD2) % MOD2;
                    temp = (temp + (1ll * c * xp[s.size() - 1 - i]) % MOD) % MOD;
                    temp2 = (temp2 + (1ll * c * xp2[s.size() - 1 - i]) % MOD2) % MOD2;
                    if (hash.count({temp, temp2})) {
                        flag = true;
                        break;
                    }
                }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    FAST
    int testCases = 1;
//    cin >> testCases;
    for(int ttt=1;ttt<=testCases;ttt++) {
//        cout<<"Case "<<ttt<<": ";
        TT();
    }
    clock_t tStart = clock();
    cerr << fixed << setprecision(10) << "Time Taken: " << (double) (clock() - tStart) / CLOCKS_PER_SEC << endl;
    return 0;
}
// You Got this! Bear those in mind:
//      * BrainStorm & Think Twice, code once.
//      * Overcome Corner Cases.
