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
    string s="hello";
    string t;cin>>t;
    int T=0;
    for(int i=0;i<t.size();i++)
    {
        if(s[T]==t[i])
            T++;
    }
    if(T==s.size())
        cout<<"YES";
    else cout<<"NO";

    /*int t;cin>>t;
    while(t--)

    {

        int n,arr[N]={0};
        cin>>n;

        for(int i=0,t=0;i<n;)
        {
            cin>>arr[i];
        }

        for(int i=0,t=0;i<n;)
        {
            cin>>arr[i];
        }

            if(t^arr[])
    }*/
    return 0;
}
