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
const int N=2e3+5, M=1e1+5, mod=1e9+7, OO=0x3f3f3f3f;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>f;
        deque<int>s;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(i<n/2)
                f.push_back(x);
            else s.push_back(x);
        }
        std::reverse(s.begin(), s.end());
        for(int i=0,ff=0,ss=0;i<n;i++)
            if(i%2==0&&ff!=f.size()) {
                cout << f[ff] << " ";
                ff++;
            }
            else {
                cout<<s[ss]<< " ";
                ss++;
            }
        cout<<endl;
    }
    return 0;
}