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
int arr[107][107],e,o,n;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        e=1,o=n*n-n*n/2+1;
        if(n==2)
            cout<<-1<<endl;
        else {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                    if((i+j)%2==0)
                    {
                        cout<<e<<" ";
                        e++;
                    }
                    else {
                        cout<<o<<" ";
                        o++;
                    }
                cout<<endl;
            }
        }
    }
    return 0;
}