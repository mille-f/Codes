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
    int n, cnt = 0;
    string s, t;
    bool flag = false;

    t.push_back('b');

    cin >> n;
    cin >> s;
    
    if ( n == 1 && s == "b" ) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i < n; i++ ) {
        if ( i % 3 == 1 ) {
            t.insert(0, "a");
            t.push_back('c');
        } else if ( i % 3 == 2 ) {
            t.insert(0, "c");
            t.push_back('a');
        } else if ( i % 3 == 0 ) {
            t.insert(0, "b");
            t.push_back('b');
        }
        cnt++;
        if ( s == t ) { 
            flag = true;
            break;
        }
    }
    
    if ( flag == true ) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
