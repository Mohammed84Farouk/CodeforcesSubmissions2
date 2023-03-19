/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#include<set>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sBin(n) __builtin_popcount(n)     //works for integers
using namespace std;
typedef long long ll;
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f/*, sqr=320*/;
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
        vector<int>a(n),b(n);
        for(int &i:a)cin>>i;
        for(int &i:b)cin>>i;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool flag= false;
        for(int i=0;i<n;i++) {
            if (a[i] + 1 == b[i]||a[i]==b[i]) continue;
            else flag = true;
//            cout << a[i] << " " << b[i] <<" "<<flag<< endl;
        }
        (flag)? cout<<"NO":cout<<"YES";
        cout<<endl;
    }
    return 0;
}
