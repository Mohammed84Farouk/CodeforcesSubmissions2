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
int n;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[107][107]={1};
        if(n==2)
            cout<<-1<<endl;
        else {
            for(int i=0;i<n;i++)
            {
                if(i) arr[i][0]+=(arr[i-1][0]+n);
                for(int j=0;j<n;j++)
                    if(j) arr[i][j]+=(arr[i][j-1]+(n-1));
            }
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                    if(arr[i][j]%(n*n)) cout<<arr[i][j]%(n*n)<<" ";
                    else cout<<n*n<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}
