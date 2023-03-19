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
    freopen("two2.in","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x;
        if(x%2)
            cout<<-1<<endl;
        else cout<<x/2<<endl;
    }

}


