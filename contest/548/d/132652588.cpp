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
 
int arr[N],l[N],r[N],ans[N];
stack<int>s;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;cin>>n;
    arr[0]=INT_MIN;arr[n+1]=INT_MIN;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    //getting the left most smallest number
    for(int i=0;i<=n+1;i++)
    {
        while(!s.empty()&&arr[i]<=arr[s.top()])
            s.pop();
        l[i]=s.empty()? -1:s.top();
        s.push(i);
    }
    while(!s.empty())s.pop();
    //getting the right most smallest number
    for(int i=n+1;i>=0;i--)
    {
        while(!s.empty()&&arr[i]<=arr[s.top()])
            s.pop();
        r[i]=s.empty()? -1:s.top();
        s.push(i);
    }
    for(int i=0;i<=n+1;i++)
    {
        int len=r[i]-l[i]-1;
        ans[len]=max(ans[len],arr[i]);
    }
    for(int i=n;i>=0;i--)
        ans[i]=max(ans[i],ans[i+1]);
    for(int i=1;i<=n;i++)
        printf("%d ",ans[i]);;
    return 0;
}
