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

int solve(int n)
{
    if(n==1)
    {
        return 3;
    }
    if(n==2)
    {
        return 5;
    }
    n--;
    n--;
    return n+(n-1)/3+6;
}
int main() {

    int n;
    cin>>n;
    cout<<solve(n)<<endl;
}