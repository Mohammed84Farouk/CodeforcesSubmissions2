/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,mx=0,ans=0;cin>>n;
        string s;cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                i++;
                ans=0;
                for(;s[i]=='P';i++)
                    ans++;
                i--;
            }
            mx=max(mx,ans);
        }
        cout<<mx<<endl;
    }
    return 0;
}
