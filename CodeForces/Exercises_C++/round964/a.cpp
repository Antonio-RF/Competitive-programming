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
	
	int qntd;
	cin >> qntd;
 
	while (qntd--) {
		int entrada;
		cin >> entrada;
		int a,b;
		a = entrada % 10;
		b = entrada / 10;
 
		long long result;
		result = a + b;
		cout << result << "\n";
	}	

	
	return 0;
}

