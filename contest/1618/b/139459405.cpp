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
const int N=2e5+5, M=27, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
void solve() {
    int n;
    cin >> n;
    int flag = 0;
    vector<char> ans(n);
    cin >> ans[0] >> ans[1];
    for (int i = 1; i < n - 2; i++) {
        string s; //cin.get();
        cin >> s;
        char a = s[0];
        char b = s[1];
        if (a == ans[i]) {
            ans[i + 1+(int) flag] = b;
        } else {
            ans[i + 1] = a;
            ans[i + 2] = b;
            flag = 1;
        }
//        for(char c:ans)
//            cout<<c;
//        cout<<endl;
    }
    if (flag == 0) ans[n - 1] = 'b';
    for (int i = 0; i < n; i++) cout << ans[i];
    cout << '\n';
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