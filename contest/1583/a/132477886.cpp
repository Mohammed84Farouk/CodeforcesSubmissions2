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
vector<int>arr;
bool isPrime(ll n)
{
    if(n==2)
        return true;
    if(n<2||n%2==0)
        return false;
    for(ll i=3;i*i<=n;i+=2)
        if(n%i==0)
            return false;
    return true;
}
int main() {
    FIO
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n;
        ll sum=0;
        cin>>n;
        arr.resize(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        // cout<<"sum= "<<sum<<", prime: "<<isPrime(sum)<<endl;
        if(!isPrime(sum)){
            cout<<n<<'\n';
            for(int i=0;i<n;i++)
                cout<<i+1<<" ";
            cout<<'\n';
        }
        else
            for(int i=0;i<n;i++)
                if(!isPrime(sum-arr[i])){
                    cout<<n-1<<'\n';
                    for(int j=0;j<n;j++)
                        if(j!=i)
                            cout<<j+1<<" ";
                    cout<<'\n';
                    break;
                }
    }
    return 0;
}