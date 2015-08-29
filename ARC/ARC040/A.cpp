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
  int n;
  cin >> n;
  char s[n][n];

  REP(i,n) {
    REP(j,n) {
      cin >> s[i][j];
    }
  }
  int red = 0, blue = 0;
  REP(i,n) {
    REP(j,n) {
      if ( s[i][j] == 'R' ) {
        red++;
      } else if ( s[i][j] == 'B' ) {
        blue++;
      }
    }
  }

  if ( red > blue ) cout << "TAKAHASHI" << endl;
  else if ( red == blue ) cout << "DRAW" << endl;
  else cout << "AOKI" << endl;

  return 0;
}
