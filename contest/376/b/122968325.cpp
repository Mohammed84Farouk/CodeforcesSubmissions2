/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e4+7;
void sieve(int n);
int take[N],give[N],a[N],b[N],c[N],ans;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        give[a[i]]-=c[i];
        take[b[i]]+=c[i];
    }
    for(int i=0;i<=n;i++)
        ans+=(give[i]+take[i]>0)?give[i]+take[i]:0;
    cout<<ans;
    return 0;
}