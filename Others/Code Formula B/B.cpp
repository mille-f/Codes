#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;
#define SZ(x) (int)(x.size())

int main(void)
{
  string s;
	int even = 0;
	int odd = 0;
  
	cin >> s;
    
	reverse(s.begin(), s.end());
  
	int k;
	for ( k = 0; k < SZ(s); k++ ) {
		int x = s[k]-'0';
		if ( k % 2 == 1 ) {
				even += x;
		} else {
				odd += x;
		}
	}

	cout << even << " " << odd << endl;

	return 0;
}
