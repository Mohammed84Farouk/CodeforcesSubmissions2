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
        int n,arr[N]={0};
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>arr[i];
        cout<<0<<" ";
        int y;
        for(int i=2;i<=n;i++)
        {
            y=(arr[i-1]|arr[i])^arr[i];
            cout<<y<<" ";
            arr[i]|=arr[i-1];
        }
        cout<<endl;
    }
    return 0;
}