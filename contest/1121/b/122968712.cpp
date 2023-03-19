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
int mp[200000];
int arr[2007],n,ans;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            int x=arr[i]+arr[j];
            mp[x]++;
            if(ans<mp[x])
                ans=mp[x];
        }
    cout<<ans;
    return 0;
}