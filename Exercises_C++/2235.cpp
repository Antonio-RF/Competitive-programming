#include <bits/stdc++.h>
using namespace std;

int main() {

	int a,b,c;
	cin >> a >> b >> c;

	bool deu_boa;
	deu_boa = false;

	if (a == b or a == c or b == c) {
		deu_boa = true;
	}
	else if (a == b+c or b == a+c or c == b+a) {
		deu_boa = true;
	}

	if (deu_boa) {
		cout << "S" << endl;
	}
	else {
		cout << "N" << endl;
	}
}
