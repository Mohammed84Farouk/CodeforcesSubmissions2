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
    int n;
    string s;
    cin>>n>>s;
    if(n==1) cout<<s+s<<endl;
    else {
        int k;
        for (k = 0; k < n-1;) {
            if (s[k] > s[k + 1] || s[k] == s[k + 1] && s[0] > s[k + 1])
                k++;
            else break;
        }
        // cout<<k<<endl;
        for (int i = 0; i <= k; i++)
            cout << s[i];
        for (int i = k; i >= 0; i--)
            cout << s[i];
        cout << endl;
    }
}
//zyhhyz
//zyhxaaxhyz
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
