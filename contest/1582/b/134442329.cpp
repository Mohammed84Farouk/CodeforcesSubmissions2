/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef unsigned long long ll;
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t; cin>>t;
    while (t--){
        int n,x,zeros=0,ones=0;
        cin>>n;
        for(int i=0;i<n&&cin>>x;i++)
            if(x==0) zeros++;
            else if(x==1) ones++;
//        cout<<ones<<" "<<zeros<<endl;
        (!ones)? cout<<0<<endl:cout<<ones*(ll)pow(2,zeros)<<endl;
    }
//    0 0 0
//    0 0
//    0   0
//    0
//      0 0
//      0
//        0
//
//
//
//
//    0 0 0
//    0 0
//    0   0
//    0
//      0
//      0 0
//        0
//
    return 0;
}
