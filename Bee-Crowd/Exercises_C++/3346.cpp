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
 
	double a,b;
	cin >> a >> b;

	if (a < b) {
		double results;
		results = abs(a / b);

		printf("%.6f\n", results);
	}
	else {
		double results;
		results = a / b;

		printf("%.6f\n", results);
	}


	return 0;
}

