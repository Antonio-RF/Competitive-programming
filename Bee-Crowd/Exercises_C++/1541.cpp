#include <bits/stdc++.h>
using namespace std;

int main() {

	int a,b,percentual;
	cin >> a >> b >> percentual;

	while (a != 0) {
		int conta;
		conta = sqrt((a * b * 100) / percentual);
		
		cout << conta << endl;
		cin >> a;
		if (a == 0) {
			break;
		}
		cin >> b >> percentual;
	}



}
