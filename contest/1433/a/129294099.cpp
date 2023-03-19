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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int ans=0;
        string s;cin>>s;
        int x=s[0]-'0';
        bool flag=false;
        for(int i=1;i<=4;i++)
        {
            if(s.size()<i&&!flag){
                x--;
                flag=true;
            }
            ans+=i*x;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
