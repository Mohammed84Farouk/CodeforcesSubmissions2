/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=(int)5e1+7, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);
    int t;cin>>t;
    while(t--)
    {
        int a,b,n,d=0;  //d/2+1 is the minimum no of deletion of characters.
        cin>>n>>a>>b;
        string s;cin>>s;
        d= unique(s.begin(),s.end())-s.begin();
        cout<<a*n+max((d/2+1)*b,n*b)<<endl; //a*n as the whole string will be deleted.
                                            //either the whole string is a block of 0s or 1s: n*b
                                            //or seprate combinations of 1s and 0s: (d/2+1)*n
    }
    return 0;
}
