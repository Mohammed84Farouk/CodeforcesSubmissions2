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
    string s,t;

    cin>>s>>t;

    int str=-1,end=-1;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] != t[i])
        {
            if(str == -1)
            {
                str = i;
                end = i;
            }
            else
            {
                end = i;
            }
        }
    }


    if(str == -1)
    {
        cout<<"YES"<<endl;
        return 0;
    }


    for(int i=str,j=end; i<j;i++,j--)
    {
        swap(t[i],t[j]);
    }
    if(s == t)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}