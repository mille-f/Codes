#include <bits/stdc++.h>

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
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int field[12][12] = {0};
int n, m;
int x, y;
int ans = 0;
VI v;

void dfs(VI v, int cnt) {
  if ( cnt == n ) {
    REP(i,v.size()) {
      FOR(j,i+1,v.size()) {
        if ( field[v[i]][v[j]] == 0 ) { return; }
      }
    }
    ans = max(ans, (int)v.size());
  } else {
    dfs(v, cnt+1);
    v.push_back(cnt);
    dfs(v, cnt+1);
    v.pop_back();
  }
}

int main(void) {
  cin >> n >> m;

  REP(i,m) {
    cin >> x >> y;
    x--; y--;
    field[x][y] = field[y][x] = 1;
  }

  dfs(v, 0);
  cout << ans << endl;

  return 0;
}
