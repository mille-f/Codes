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
    int n, k, A[n][k], ans, flag;

    std::cin >> n >> k;

    REP(i,n) {
        REP(j, k) {
            std::cin >> A[i][j];
        }
    }

    REP(i,n) {
        REP(j,k) {
            if ( A[i][j] ^ A[i+1][j] == 0 ) {
                flag = 1;
            }
        }
    }
    


    if ( flag = 0 ) {
        std::cout << "Nothing" << std::endl;
    } else {
        std::cout << "Found" << std::endl;
    }

    return 0;
}
