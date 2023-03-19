/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e6+5, M=27, mod=1e9+7, OO=0x3f3f3f3f/*, sqr=320*/;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>z,o;
        for(int i=0;i<n;i++)
            if(s[i]=='1')
                o.push_back(i+1);
            else z.push_back(i+1);
        set<int>ans;
        //9
        //001010110
        //1 2 4 6 9     //zeros
        //3 5 7 8       //ones
        for(int i=0;i<o.size();i++)
            if(z.size()>=i+1&&o[i]<z[z.size()-1-i]) {
                ans.insert(o[i]);
                ans.insert(z[z.size() - 1 - i]);
//                cout<<"hi   "<<z.size()<<" "<<-1-i<<" "<<ans.size()<<endl;
            }
        if(ans.size()==0)
            cout<<"0\n";
        else {
            cout << "1\n" << ans.size() << " ";
            for (auto x: ans)
                cout << x << " ";
            cout << '\n';
        }
    }
    return 0;
}
