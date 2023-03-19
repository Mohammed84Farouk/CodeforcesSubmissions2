/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int arr[2007],n,ans,mp[200009];
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
            ans=max(ans,mp[x]);
        }
    cout<<*max_element(mp, mp+200009);
    return 0;
}