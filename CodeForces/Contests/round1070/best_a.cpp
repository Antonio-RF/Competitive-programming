#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int n;
	cin >> n;

	int maxi=0;
	int count=0;
	for (int i=0 ; i<n ; i++) {
		int x;
		cin >> x;
		if (x < maxi) count++;
		else maxi = x;
	}
	cout << count << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solution();

	return 0;
}

