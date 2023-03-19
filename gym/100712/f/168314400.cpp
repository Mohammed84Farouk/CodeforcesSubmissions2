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

class DS
{
public:
    int size;
    vector<int> setsize;
    int n_disjoint;
private:
    vector<int> parent;
    vector<int> rank;
    void set_parent(int child_root, int parent_root){
        parent[child_root] = parent_root;
        setsize[parent_root] += setsize[child_root];
    }

public:
    DS(int size):size(size),setsize(size,1),n_disjoint(size),rank(size,0){
        parent.assign(size,0);
        iota(parent.begin(),parent.end(),0);
    }
    int find(int i)
    {
        if(parent[i] != i)
            parent[i] = find(parent[i]);
        return parent[i];
    }

    void unite(int i,int j)
    {
        i = find(i);
        j = find(j);
        if(i != j)
        {
            --n_disjoint;
            if(rank[i] > rank[j])
            {
                set_parent(j,i);
            }
            else if(rank[i] < rank[j])
            {
                set_parent(i,j);
            }
            else
            {
                set_parent(j,i);
                ++rank[i];
            }
        }
    }
};
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x,y,c;
        vector<pair<int,pair<int,int>>> vec;
        while(m--)
        {
            cin>>x>>y>>c;
            x--;
            y--;
            vec.push_back({c,{x,y}});
        }

        sort(vec.begin(),vec.end());

        DS ds(n);
        int res = 0;
        for(auto p : vec){
            if(ds.n_disjoint == 1)
                break;
            res = p.first;
            ds.unite(p.second.first,p.second.second);
        }

        cout<<res<<endl;
    }
}