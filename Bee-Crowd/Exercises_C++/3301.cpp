#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
 
	int h,z,l;
	cin >> h >> z >> l;

	if (h > z and h > l) {
		if (z > l) cout << "zezinho" << endl;
		else cout << "luisinho" << endl;
	}

	if (z > h and z > l) {
		if (h > l) cout << "huguinho" << endl;
		else cout << "luisinho" << endl;
	}

	if (l > h and l > z) {
		if (h > z) cout << "huguinho" << endl;
		else cout << "zezinho" << endl;
	}


	return 0;
}

