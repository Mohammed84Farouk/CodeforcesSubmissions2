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
const int N=4e5+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
string s;
int main() {
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        int plus=0,mn1=INT_MAX,mn2=INT_MAX;
        for(int i=s.size()-1;i>=0;i--,plus++) {
            if (s[i] == '0'&&mn1==INT_MAX) {
//                cout << "HI " << s << " ";
                for (int j = i - 1; j >= 0; j--)
                    if (s[j] == '0' || s[j] == '5') {
                        mn1 = i - j - 1 + plus;
//                        cout<<s[j]<<" "<<s[i]<<endl;
//                        cout<<i<<" "<<j<<" "<<plus<<endl;
//                        cout<<mn1;
                        break;
                    }
            } else if (s[i] == '5'&&mn2==INT_MAX) {
//                cout << "NOT HI" << s<<" "<<endl;
                for (int j = i - 1; j >= 0; j--)
                    if (s[j] == '2' || s[j] == '7') {
                        mn2 = i - j - 1 + plus;
                        break;
                    }
            }
        }
//        cout<<mn1<<" "<<mn2<<endl;
        cout<<min(mn1,mn2)<<'\n';
    }
    return 0;
}