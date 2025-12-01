#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
void solution() {
	ll n;
	cin >> n;
 
	vector<ll> v(n);
	for (ll &i : v) cin >> i;

	if (v[0] == -1) v[0] = v[n-1];
	if (v[n-1] == -1) v[n-1] = v[0];
	for (int i=0 ; i<n ; i++)
		if (v[i] == -1) v[i] = 0;

	cout << abs(v[n-1]-v[0]) << endl;
	for (int i=0 ; i<n ; i++) cout << v[i] << " ";
	cout << endl;
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
