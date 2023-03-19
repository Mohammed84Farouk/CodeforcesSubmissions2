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
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;

int main() {
    FAST;
    int n,arr[N],q,x;cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    cin>>q;
    for(int i=0;i<q&&cin>>x;i++){
        if(x>arr[n-1]) cout<<"Dr. Samer cannot take any offer :(.\n";
        else cout<<*lower_bound(arr,arr+n,x)<<'\n';
    }
    return 0;
}
