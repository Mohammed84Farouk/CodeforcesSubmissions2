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

template<class T>
bool ckmax(T &a, const T &b) { return b > a ? a = b, 1 : 0; }

template<class T>
bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0; }

typedef long long ll;
const int N = 2e4 + 9, M = 1e7 + 6, mod = 998244353, OO = 0x3f3f3f3f, sqr = 320;
const ll LOO = 0x3f3f3f3f3f3f3f3f;
const long double eps = 1e-7;

void solve() {
    int n,cnt=0,mn=INT_MAX;
    cin>>n;
    vector<int>v(n);
    for(int &i:v){
        cin>> i;
        ckmin(mn,i);
    }
    sort(v.begin(), v.end());
    for(int i=1;cnt!=n/2;i++)
        if (v[i] % mn != mn) {
            cout << v[i] << " " << mn << '\n';
            cnt++;
        }
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int testCases = 1;
    cin >> testCases;
    while (testCases--)
        solve();
    return 0;
}
