/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)2e5+7;
void sieve(int n);
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("help.in","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--)
    {
        int n,ans=0;cin>>n;
        for(int i=3;i*i<=2*n-1;i+=2)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}