/*
اللهم انصر الأقصى والقدس وأهالي غزة وفلسطين
-اللهم اطمس على أعداء الدين والمدنسين-اليهود اللصوص
اللهم حرر فلسطين من كيد اليهود واجعل كيدهم في نحورهم
*/
#include<bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define numOf1sIntBin(n) __builtin_popcount(n)     //works for integers
#define getUnique(v) {sort(v.begin(),v.end());v.erase(unique(v.begin(),v.end()),v.end());}
using namespace std;
typedef long long ll;
const int N=1e5+5, M=27, mod=1e9+7, OO=0x3f3f3f3f, sqr=320;
const ll LOO=0x3f3f3f3f3f3f3f3f;
const long double eps=1e-8;
vector<int>primes;
vector<bool>prime;
void sieve(int n){
    prime.resize(n,true);
    prime[0]=prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
}
void solve() {
    int n,o=0,t=0;
    cin>>n;
    vector<int>v(n);
    for(int &i:v){
        cin>>i;
        if(i==1) o++;
        else t++;
    }
    while(t){
        cout<<2<<" ";
        t--;
        break;
    }
    while(o){
        cout<<"1 ";
        o--;
        break;
    }
    while(t){
        cout<<2<<" ";
        t--;
    }
    while(o){
        cout<<"1 ";
        o--;
    }
//    sort(v.begin(),v.end());
//    while()
//    if(o==0)
//        for(int x:v) cout<<x<<" ";
//    else if(t>=2)
//    else {
//        int s=0;
//        for (int i = 0, nxtPrime = 0; i < n; i++) {
//
//        }
//    }
}

int main() {
     FAST;
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int tt=1;
//    cin>>tt;
    while(tt--)
        solve();
    return 0;
}