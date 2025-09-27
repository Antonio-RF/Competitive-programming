#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int n, a, b;
	cin >> n >> a >> b;

	string s;
	cin >> s;
	int menor_b = -1;
	for (int i=0 ; i<n ; i++) {
		if (s[i] == 'b') {
			menor_b = i+1;
			break;
		}
	}

	int soma = a+b;
	int count_b = 0;
	int total = 0;
	for (int i=0 ; i<n ; i++) {
		if (s[i] == 'a') {
			if (total < (a+b)) {
				total++;
				cout << "Yes" << endl;
			}
			else cout << "No" << endl;
		}
		else if (s[i] == 'b') {
			if ((total < (a+b)) && (count_b < b)) {
				total++;
				count_b++;
				cout << "Yes" << endl;
			}
			else cout << "No" << endl;
		}
		else cout << "No" << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	solution();

	return 0;
}

