/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=2e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
string s;
int n;
vector<int>prefix;
int buildPrefix(){
    prefix=vector<int>(n);
    int br=0;
    prefix[0]=0;
    for(int i=1;i<n;i++){
        while(br&&s[i]!=s[br]) br=prefix[br-1];
        if(s[i]==s[br]) br++;
        prefix[i]=br;
    }
    return prefix[n-1];
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>s;
    n=s.size();
    int x=buildPrefix();
    bool flag = true;
    if(x==0) return cout<<"Just a legend\n", 0;
    else{
        for (int i = x; i < n - 1 && flag; i++)
            if (prefix[i] == x)
                flag = false;
        if (!flag) cout << s.substr(0, x) << '\n';
        else {
            if(prefix[x-1]==0) return cout<<"Just a legend\n", 0;
            else cout<<s.substr(0,prefix[x-1])<<'\n';
        }
    }
    return 0;
}
//avcaavcaavcaavc