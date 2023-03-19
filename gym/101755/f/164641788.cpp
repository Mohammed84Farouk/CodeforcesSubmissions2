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
int n;

int main() {

    cin>>n;
    vector<pair<int,int>> res;
    vector<set<int>> succ(n+1,set<int>());

    vector<int> parent(n+1,0);
    vector<pair<int,int>> toget;
    bool ok = true;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x;
        toget.emplace_back(x,i+1);
        while(x--)
        {
            cin>>y;
            if(y == i+1)
                ok = false;
            succ[i+1].insert(y);
        }
    }

    sort(toget.begin(),toget.end());

    for(auto ele : toget)
    {
        int ind = ele.second;

        if(parent[ind])
            ok = false;

        for(int v : succ[ind])
        {
            if(parent[v])
            {
                if(succ[ind].find(parent[v]) == succ[ind].end())
                    ok = false;
            }
            else
            {
                parent[v] = ind;
            }


        }
    }

    int c = 0;
    for(int i=1;i<=n;i++)
    {
        if(!parent[i]) c++;
    }

    if(c != 1)
        ok = false;

    if(ok)
    {
        for(int i=1;i<=n;i++)
        {
            int x = parent[i];
            while(x)
            {
                if(succ[x].find(i) == succ[x].end())
                    ok = false;
                x = parent[x];
            }
        }
    }


    if(ok)
    {
        cout<<"YES"<<endl;

        for(int i=1;i<=n;i++)
        {
            if(parent[i])
            {
                cout<<parent[i]<<' '<<i<<endl;
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

}