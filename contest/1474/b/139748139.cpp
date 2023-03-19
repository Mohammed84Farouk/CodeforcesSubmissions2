#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int D=20021;
vector<int>primes;
void getPrimes(){
    vector<bool>isPrime(D+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=D;i++){
        if(isPrime[i]){
//            ll x=(2*i+1)*(i+1);
            primes.push_back(i);
            for(int j=i*i;j<=D;j+=i)
                isPrime[j]=false;
        }
    }
}
int main()
{
    getPrimes();
  //  for(auto i:primes)
//        cout<<i.first<<" "<<i.second<<endl;
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        auto x=lower_bound(primes.begin(),primes.end(),1+d)-primes.begin();
        ll p1=primes[x];
        ll p2;
        for(int i=x+1;i<primes.size();i++)
            if(primes[i]-p1>=d){
                p2=primes[i];
                break;
            }
        cout<<p1*p2<<'\n';
    }
    return 0;
}
