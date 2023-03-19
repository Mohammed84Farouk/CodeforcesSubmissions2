/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int k,n,s,p;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>k>>n>>s>>p;
    int x=n%s==0? n/s:n/s+1;
    int sum=x*k;
    int ans=sum%p==0?sum/p:sum/p+1;
    cout<<ans;
    return 0;
}
