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
const int N=2e6+9, M=1e9+6, mod=998244353, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<int>st[26];
string s;
vector<int>fine(N);
void solve() {
    int n;
    cin >> n;
    string t;
    cin >> t;
    while (n--) s = s + t;
    for (int i = 0; i < s.size(); i++) st[s[i] - 'a'].push_back(i);
    cin >> n;
    while (n--) {
        int idx;
        char c;
        cin >> idx >> c;
//        for(auto x:st[c-'a']) cout<<x<<" ";
//        cout<<"    ";
        fine[st[c-'a'][idx-1]]=true;
        st[c - 'a'].erase(st[c - 'a'].begin() + idx - 1);
//        for(auto x:st[c-'a']) cout<<x<<" ";
//        cout<<endl;
    }
    for (int i = 0; i < s.size(); i++)
        if (!fine[i])
            cout << s[i];
}

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tt=1;
//    cin>>tt;
    while(tt--)
        solve();
    return 0;
}
