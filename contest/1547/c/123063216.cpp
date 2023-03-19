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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--)
    {
        int k,n,m,a[109]={0},b[109]={0};
        cin>>k>>n>>m;
        vector<int>ans;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        bool flag=false;
        int i=0,j=0;
        while(i+j<n+m&&!flag)
        {
            if(a[i]<=k&&i<n)
            {
                ans.push_back(a[i]);
                if(a[i]==0)k++;
                i++;
            }
            else if(b[j]<=k&&j<m)
            {
                ans.push_back(b[j]);
                if(b[j]==0)k++;
                j++;
            }
            else
                flag=true;
        }
        if(flag)
            cout<<-1;
        else
            for(int i:ans)
                cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}

