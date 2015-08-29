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

bool IsPrime(int n)
{
    if ( n < 2 ) return false;
    if ( n == 2 ) return true;

    for ( int i = 2; i < n; ++i) {
        if ( n % i == 0 ) return false;
    }
    return true;	
}

int main()
{
    int n, sum = 0;

    std::cin >> n;

    for ( int i = n; i >= 0; i-- ) {
        sum += i;
    }

    if ( IsPrime(sum) == true ) {
        std::cout << "WANWAN" << std::endl;
    } else {
        std::cout << "BOWWOW" << std::endl;
    }

    return 0;
}
