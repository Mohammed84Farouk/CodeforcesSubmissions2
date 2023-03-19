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
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
    ll n, a, b, p, q, ans = 0, ans2 = 0;
    cin >> n >> a >> b >> p >> q;
    if(a==b) ans=max(q,p)*(n/a);
    else{
        ll numA=n/a,numB=n/b,numCommon=n/(a*b/__gcd(a,b));
        ans=numA*p+(numB-numCommon)*q;
        ans2=(numA-numCommon)*p+numB*q;
    }
    cout << max(ans2,ans);
    return 0;
}


