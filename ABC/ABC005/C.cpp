#include <bits/stdc++.h>

using namespace std;

#define ALL(x) (x).begin(),(x).end()
#define ABS(x) ((x < 0) ? -(x) : (x))
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define MP make_pair
#define PB push_back
#define REP(i,n) FOR(i,0,n)
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

int main(void) {
  int t, n, m;
  int pos = 0;
  int a[100], b[100];
  bool flag = false;

  cin >> t;
  cin >> n; REP(i,n) cin >> a[i];
  cin >> m; REP(i,m) cin >> b[i];

  if ( n < m ) flag = false;
  REP(i,n) {
    if ( a[i] <= b[pos] && b[pos]-a[i] <= t ) {
      pos++;
    }
  }
  if ( pos == m ) flag = true;

  if ( flag == true ) { cout << "yes" << endl; }
  else { cout << "no" << endl; }

  return 0;
}
