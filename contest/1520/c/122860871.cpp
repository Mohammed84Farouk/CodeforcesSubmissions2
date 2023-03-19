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
            ll t,n,incx=0,incy=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        incx=n-1,incy=n;
        if(n==2){cout<<"-1"<<endl;continue;}
        arr[0][0]=1;
        loop(i,n)
        {
            if(i)arr[i][0]=(arr[i-1][0]+incx)%(n*n);
            looph(j,1,n)
            {
                arr[i][j]=(arr[i][j-1]+incy)%(n*n);
            }
        }
        loop(i,n)
        {
            loop(j,n)
            {

                if(arr[i][j])cout<<arr[i][j]<< " ";
                else cout<<n*n<<" ";
            }
            cout<<endl;
        }
    }








}
