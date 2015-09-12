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

bool IsPrime(int n) {
  if ( n < 2 ) return false;
  if ( n == 2 ) return true;

  for ( int i = 2; i < sqrt(double(n))+1; ++i) {
    if ( n % i == 0 ) return false;
  }
  return true;
}

int main(void) {
  int n, t;
  cin >> n;

  if ( n == 1 ) { cout << "Not Prime" << endl; }
  else if ( IsPrime(n) == true ) { cout << "Prime" << endl; }
  else {
    t = n % 10;
    if ( t % 2 != 0 && t != 5 && n % 3 != 0 ) {
      cout << "Prime" << endl;
    } else { cout << "Not Prime" << endl; }
  }

  return 0;
}
