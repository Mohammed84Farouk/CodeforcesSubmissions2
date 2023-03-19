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
    int t;cin>>t;
    while(t--)
    {
        int n,midSheep;cin>>n;
        string s;cin>>s;
        vector<int>sheeps;
        for(int i=0;i<n;i++)
            if(s[i]=='*')
                sheeps.push_back(i);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                if(cnt==sheeps.size()/2)
                {
                    midSheep=i;
                    break;
                }
                cnt++;
            }
        }
        ll ans=0;
        int j=0,sz=sheeps.size();
        for(int i:sheeps)
        {
                ans+=abs(i-(midSheep-sz/2+j));
                j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}