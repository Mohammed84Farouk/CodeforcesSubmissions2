#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <memory.h>
#include <unordered_set>
#include <numeric>
#include <sstream>
#include <map>
#include <set>
#include <random>
#include <iomanip>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

ll doIt(ll a, ll b)
{
    ll ab = a;
    ll b2 = b;
    while(b2 > 0)
    {
        b2/=10;
        ab*=10;
    }
    ab = ab + b;

    ll ba = b;
    ll a2 = a;
    while(a2 > 0)
    {
        a2/=10;
        ba*=10;
    }
    ba = ba + a;



    return ab * ba + a*b;
}
int main2() {
    for(int i=1;i<100;i++)
    {
        for(int j=1;j<100;j++)
        {
            cout<<i%3<<' '<<j%3<<' '<<doIt(i,j)%3<<endl;
        }
    }
}
int main() {
    vector<int> arr[3];
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>vec[i];
        arr[vec[i]%3].push_back(i);
    }
    vector<int> res(n,-1);
    // Z = 0
    if(arr[0].size() <= n/2)
    {
        int w = n/2,b = n/2;

        for(int ind : arr[0])
        {
            res[ind] = 0;
            w--;
        }

        for(int i=0;i<n;i++)
        {
            if(res[i] == -1)
            {
                if(w)
                {
                    res[i] = 0;
                    w--;
                }
                else
                {
                    res[i] = 1;
                    b--;
                }
            }
        }
        cout<<0<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<res[i];
        }

        return 0;
    }


    // z = 1;
    if(arr[0].size() == n)
    {
        int w = n/2,b = n/2;
        for(int i=0;i<n;i++)
        {
            if(res[i] == -1)
            {
                if(w)
                {
                    res[i] = 0;
                    w--;
                }
                else
                {
                    res[i] = 1;
                    b--;
                }
            }
        }
        cout<<1<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<res[i];
        }

        return 0;
    }

    //z = 2
    if(arr[1].size() + arr[2].size() <= n/2)
    {
        bool bo = true;
        int w = n/2, b = n/2;
        for(int ind : arr[1])
        {
            w--;
            res[ind] = 0;
        }
        for(int ind : arr[2])
        {
            w--;
            res[ind] = 0;
        }

        for(int i=0;i<n;i++)
        {
            if(res[i] == -1)
            {
                if(w)
                {
                    res[i] = 0;
                    w--;
                }
                else
                {
                    res[i] = 1;
                    b--;
                }
            }
        }


        cout<<2<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<res[i];
        }

        return 0;
    }

    cout<<-1;
}