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
 
	int t;
	cin >> t;
	
	int b,a,m,d;
	b = 0;
	a = 0;
	m = 0;
	d = 0;
	while (t--) {
		string nome, funcao;
		int horas;
		cin >> nome >> funcao >> horas;
		if (funcao[0] == 'b')
			b+=horas;
		if (funcao[0] == 'a')
			a+=horas;
		if (funcao[0] == 'm')
			m+=horas;
		if (funcao[0] == 'd')
			d+=horas;
	}
	
	int results = 0;
	results += b / 8;
	results += a / 4;
	results += m / 6;
	results += d / 12;

	cout << results << endl;

	return 0;
}

