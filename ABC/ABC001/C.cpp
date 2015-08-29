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
#define REP(i,n) FOR(i,0,n)
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
const double PI = acos(-1.0);
const int mod = 1000000007;

int main()
{
    int deg, dis, w;
    string dir;

    std::cin >> deg >> dis;
    double clc = floor(((dis/60.0)+0.05)*10)/10;

    if ( deg < 112 && deg > 3487 ) {
        dir = "N";
    }
    if ( deg >= 112 && deg <= 337 ) {
        dir = "NNE";
    }
    if ( deg > 337 && deg <= 562 ) {
        dir = "NE";
    }
    if ( deg > 562 && deg <= 787 ) {
        dir = "ENE";
    }
    if ( deg > 787 && deg <= 1012 ) {
        dir = "E";
    }
    if ( deg > 1012 && deg <= 1237 ) {
        dir = "ESE";
    }
    if ( deg > 1237 && deg <= 1462 ) {
        dir = "SE";
    }
    if ( deg > 1462 && deg <= 1687 ) {
        dir = "SSE";
    }
    if ( deg > 1687 && deg <= 1912 ) {
        dir = "S";
    }
    if ( deg > 1912 && deg <= 2137 ) {
        dir = "SSW";
    }
    if ( deg > 2137 && deg <= 2362 ) {
        dir = "SW";
    }
    if ( deg > 2362 && deg <= 2587 ) {
        dir = "WSW";
    }
    if ( deg > 2587 && deg <= 2812 ) {
        dir = "W";
    }
    if ( deg > 2812 && deg <= 3037 ) {
        dir = "WNW";
    }
    if ( deg > 3037 && deg <= 3236 ) {
        dir = "NW";
    }
    if ( deg > 3236 && deg <= 3487 ) {
        dir = "NNW";
    }

    if ( clc >= 0.00 && clc <= 0.20 ) {
        dir = "C"; w = 0;
    }
    if ( clc >= 0.21 && clc <= 1.50 ) {
        w = 1;
    }
    if ( clc >= 1.51 && clc <= 3.30 ) {
        w = 2;
    }
    if ( clc >= 3.31 && clc <= 5.40 ) {
        w = 3;
    }
    if ( clc >= 5.41 && clc <= 7.90 ) {
        w = 4;
    }
    if ( clc >= 7.91 && clc <= 10.70 ) {
        w = 5;
    }
    if ( clc >= 10.71 && clc <= 13.80 ) {
        w = 6;
    }
    if ( clc >= 13.81 && clc <= 17.10 ) {
        w = 7;
    }
    if ( clc >= 17.11 && clc <= 20.70 ) {
        w = 8;
    }
    if ( clc >= 20.71 && clc <= 24.40 ) {
        w = 9;
    }
    if ( clc >= 24.41 && clc <= 28.40 ) {
        w = 10;
    }
    if ( clc >= 28.41 && clc <= 32.60 ) {
        w = 11;
    }
    if ( clc >= 32.61 ) {
        w = 12;
    }

    std::cout << dir << " " << w << std::endl;

    return 0;
}
