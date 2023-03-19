/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)1e5+7;
void sieve(int n);

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {

        int xa,ya,xb,yb,xf,yf,ans=0;
        cin>>xa>>ya>>xb>>yb>>xf>>yf;
        ans=max(xa,xb)-min(xa,xb)+max(ya,yb)-min(ya,yb);
        ans+=(xa==xb&&xa==xf&&min(ya,yb)<yf&&yf<max(ya,yb)||ya==yb&&ya==yf&&min(xa,xb)<xf&&xf<max(xa,xb))? 2:0;
        cout<<ans<<endl;
    }
    return 0;
}
