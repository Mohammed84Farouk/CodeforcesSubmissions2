//G. Changing Brackets Ready-to-submit
/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=15e1+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        vector<int>prefixSumO(s.size()+1,0),prefixSumE(s.size()+1,0);
        for(int i=0;i<s.size();i++){
            prefixSumE[i+1]+=prefixSumE[i];
            prefixSumO[i+1]+=prefixSumO[i];
            if(s[i]==']'||s[i]=='['){
                if(i&1)
                    prefixSumO[i+1]++;
                else prefixSumE[i+1]++;
            }
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--;
            cout<<abs(prefixSumE[r]-prefixSumE[l]-(prefixSumO[r]-prefixSumO[l]))<<'\n';
        }
    }
    return 0;
}
