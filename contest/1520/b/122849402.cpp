/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)1e5+7;
void sieve(int n);
int n;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        cin>>n;
        string nw="1",t=to_string(n);
        int sz=t.size();
        for(int i=0;i<sz-1;i++)
            nw+="1";
        int x=stoi(nw);
        cout<<(nw.size()-1)*9+n/x<<endl;
    }
    return 0;
}
