//https://vjudge.net/problem/UVA-10075
// IN THE NAME OF ALLAH, NOW SOLVING DP PROBLEMS.
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
int n,m;
vector<int>prefix;
string s,t;
int buildPrefix(){
    prefix=vector<int>(m);
    int border=0;
    prefix[0]=0;
    for(int i=1; i<m; i++){
        while(border>0 && t[i]!=t[border]) border=prefix[border-1];
        if(t[i]==t[border]) border++;
        prefix[i]=border;
    }
    return prefix[m-1];
}

int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>s>>t;
    n=s.size(),m=t.size();
    int x=buildPrefix(),freq1=0,freq0=0;    //getting the last border possible
//    cout<<x<<endl;
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            freq0++;
        else freq1++;
    }
//    cout<<freq1<<" "<<freq0<<endl;
    m-=x;
    while(freq0&&freq1){
        for(int i=0;i<m&&freq1&&freq0;i++){
            cout<<t[i];
            if(t[i]=='0') freq0--;
            else freq1--;
        }
    }
    while(freq1) {
        cout << '1';
        freq1--;
    }
    while(freq0) {
        cout << '0';
        freq0--;
    }
    return 0;
}