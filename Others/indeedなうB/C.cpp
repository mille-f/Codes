#include <algorithm>
#include <bitset>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

#define ALL(x) (x).begin(),(x).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define MP make_pair
#define PB push_back
#define REP(i,n)  FOR(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define SIZE(x) int((x).size())

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef vector<int> VI;
typedef vector<VI> VVI;

const double INF = 1e100;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
const int mod = 1000000007;

int main(void) {
    int n;
    std::cin >> n;

    vector<VI> G(n);
    vector<bool> vis(n);
    VI ans;

    REP(i,n-1) {
        int a, b;
        std::cin >> a >> b;
        a--; b--;
        G[a].PB(b);
        G[b].PB(a);
    }
    
    priority_queue< int, vector<int>, greater<int> > pq;
    pq.push(0);
    vis[0] = 1;

    while ( !pq.empty() ) {
        int t = pq.top();
        pq.pop();
        ans.PB(t);
        REP(i,SIZE(G[t])) {
            int u = G[t][i];
            if ( vis[u] != 0 ) continue;
            vis[u] = 1;
            pq.push(u);
        }
    }

    REP(i,n) {
        if ( i != 0 ) std::cout << " ";
        std::cout << ans[i]+1;
    }
    puts("");

    return 0;
}
