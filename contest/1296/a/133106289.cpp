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
        int n, arr[N],cntOdd=0, cntEven=0;
        set<int>s;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]&1) {
                cntOdd++;
                s.insert(arr[i]);
            }
            else cntEven++;
        }
        (cntEven==n||cntOdd==n&&cntOdd%2==0)? cout<<"NO\n":cout<<"YES\n";
    }
    return 0;
}