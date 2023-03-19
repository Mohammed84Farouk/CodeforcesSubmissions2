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
int n,k;
vector<int>arr;
int main() {
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        arr.resize(k);
        for(int i=0;i<k;i++) cin>>arr[i];
        sort(arr.rbegin(),arr.rend());
        int sum=0,cnt=0;
        for(int i=0;i<k;i++,cnt++){
            sum+=n-arr[i];
            if(sum>=n)
                break;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}