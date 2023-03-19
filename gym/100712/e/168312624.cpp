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


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        int mx = 0;
        for(int i=0;i<n;i++) {
            cin >> vec[i];
            mx = max(mx, vec[i]);
        }
        int bon = 100 - mx;
        int x = 0;
        for(int i=0;i<n;i++)
        {
            if(vec[i]+bon >= 50) x++;
        }
        cout<<x<<endl;
    }
}