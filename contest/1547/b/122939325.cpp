#include <bits/stdc++.h>

using namespace std;
typedef vector<long long> vi;
typedef pair<long long,long long> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define endl '\n'
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;

#define FASTIO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define loop(i, len) for (long long i = 0; i < len; ++i)
#define looph(i,h, len) for (long long i = h; i < len; ++i)


int arr[100][100];
int main() {
    FASTIO
            ll t,i,j;
    bool f;
    char nx;
    string x;
    cin>>t;
    while(t--)
    {
     cin>>x;
     f=0;
     loop(n,x.size())
     {
         if(x[n]=='a'){f=1;i=n;j=n;i--;j++;break;}

     }
     nx='b';
     while(i>=0||j<=x.size()-1)
     {
         if(x[i]==nx&&i>=0)nx++,i--;
         else if(x[j]==nx&&j<=x.size()-1)nx++,j++;
         else {f=0;break;}
     }
     if(f)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

    }








}
