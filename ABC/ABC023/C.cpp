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
    int R, C, K, N, a, b;
    cin >> R >> C >> K >> N;
    
    int r[N], c[N];
    REP(i,N) {
        cin >> a >> b;
        a--;    b--;
        r[a]++; c[b]++;
    }

    int rcnt[R], ccnt[C];
    REP(i,N) {
        rcnt[r[i]]++;
        ccnt[c[i]]++;
    }

    int rnum[N+1], cnum[N+1];
    REP(i,R) {
        rnum[rcnt[i]]++;
    }
    REP(i,C) {
        cnum[ccnt[i]]++;
    }

    ll ans = 0;
    for (int i = 0; i <= K; i++ ) {
        ans += rnum[i] * cnum[K - i];
    }

    REP(i,N) {
        int cnt = rcnt[r[i]] + ccnt[c[i]];
        if ( cnt == K ) ans--;
        if ( cnt == K + 1 ) ans++;
    }

    cout << ans << endl;

    return 0;
}
