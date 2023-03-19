/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e3+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int diff;
        if(a==b) cout<<0<<'\n';
        else if(a<b){
            diff=b-a;
            if (diff&1) cout<<1<<'\n';
            else cout<<2<<'\n';
        }
        else{
            diff=a-b;
            if(diff&1) cout<<2<<'\n';
            else cout<<1<<'\n';
        }
    }
    return 0;
}
