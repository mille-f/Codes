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
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define MP make_pair
#define PB push_back
#define REP(i,n)  FOR(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define SZ(x) int((x).size())

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

int main()
{
    int m;
    string vv;

    std::cin >> m;

    if ( m < 100 ) {
        printf("00\n");
    } else if ( m >= 100 && m <= 5000 ) {
        if ( m <= 1000 ) {
            printf("0%d\n", m/100);
        } else {
            printf("%d\n", m/100);
        }
    } else if ( m >= 6000 && m <= 30000 ) {
        printf("%d\n", (m/1000)+50);
    } else if ( m >= 35000 && m <= 70000 ) {
        printf("%d\n", (((m/1000)-30)/5)+80);
    } else if ( m > 70000 ) {
        printf("89\n");
    }

    return 0;
}
