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

int main(void) {
  char w[6] = {'A','B','C','D','E','F'};
  int ans[6] = {0};
  string str;

  cin >> str;
  int len = str.size();

  REP(i,6) {
    REP(j,len) {
      if ( str[j] == w[i] ) {
        ans[i]++;
      }
    }
  }

  REP(i,5) {
    cout << ans[i] << " ";
  } cout << ans[5] << endl;

  return 0;
}
