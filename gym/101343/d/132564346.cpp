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
const int N=1e3+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    while (n--){
        string s;
        cin>>s;
        int l=0,num=0,symb=0;
        for(char c:s)
            if(c>='0'&&c<='9') num++;
            else if(c=='@'||c=='!'||c=='?') symb++;
        l=s.size()-symb-num;
        if(l<4) cout<<"The last character must be a letter.\n";
        else if(num<4) cout<<"The last character must be a digit.\n";
        else if(symb<2) cout<<"The last character must be a symbol.\n";
        else cout<<"The last character can be any type.\n";
    }
    return 0;
}
