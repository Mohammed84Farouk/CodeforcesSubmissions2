/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string o,s[10];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>o;
    for(int k=0;k<10;k++)
        cin>>s[k];
    string t="";
    for(int i=1;i<=o.size();i++)
    {
        t+=o[i-1];
        if(i%10==0)
            for(int j=0;j<10;j++)
                if(t==s[j])
                {
                    cout<<j;
                    t="";
                }
    }
    return 0;
}
