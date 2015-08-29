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

int main(void) {
  int n, a, b, x, p = 0;
  string s;

  cin >> n >> a >> b;
  REP(i,n) {
    cin >> s >> x;
    if ( s == "West" ) {
      if ( x < a ) {
        p -= a;
      } else if ( x > b ) {
        p -= b;
      } else {
        p -= x;
      }
    } 
    if ( s == "East" ) {
      if ( x < a ) {
        p += a;
      } else if ( x > b ) {
        p += b;
      } else {
        p += x;
      }
    }
  }

  if ( p > 0 ) { cout << "East" << " " << p << endl; }
  else if ( p < 0 ) { cout << "West" << " " << -(p) << endl; }
  else { cout << 0 << endl; }

  return 0;
}
