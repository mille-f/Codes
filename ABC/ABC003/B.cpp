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
  std::map<char, int> mp;
  mp['@'] = 10;
  mp['a'] = 1; mp['t'] = 1; mp['c'] = 1; mp['o'] = 1; mp['d'] = 1; mp['e'] = 1; mp['r'] = 1;
  string s, t;
  int p;
  bool flag = true;
  cin >> s >> t;

  REP(i,s.size()) {
    if ( s[i] != t[i] ) {
      p = 0;
      p += mp[s[i]];
      p += mp[t[i]];
      if ( p < 11 ) flag = false;
    }
  }

  if ( flag == true ) { cout << "You can win" << endl; }
  else { cout << "You will lose" << endl; }

  return 0;
}
