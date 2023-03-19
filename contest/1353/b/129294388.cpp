/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)5e2+7, mod=1e9;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;cin>>n>>k;
        vector<int>a(50),b(50);
        int nn=n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a.begin(),a.end(),greater<>());
        sort(b.begin(),b.end(),greater<>());
        for(int i=0,j=0;i<n&&nn;)
        {
            if(b[j]>a[i]&&k){
                sum+=b[j];
                k--;
                j++;
                nn--;
            }
            else{
                sum+=a[i];
                i++;
                nn--;
            }
        }
        cout<<sum<<'\n';
    }
    return 0;
}
