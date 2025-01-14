#include <bits/stdc++.h>
using namespace std;

int main() {

	int n,m;
	cin >> n >> m;

	int troco;
	troco = m - n;
	
	int notas[] = {2,5,10,20,50,100};
	bool deu_boa = {false};
		
	while (n != 0 or m != 0) {

	for (int c=0 ; c<6 ; c++) {
		for (int k=(c+1) ; k<6 ; k++) {	
			if (notas[c] + notas[k] == troco) {
				deu_boa = true;
				break;
			}
		}
	}
	
	if (deu_boa) {
		cout << "possible" << endl;
	}
	else {
		cout << "impossible" << endl;
	}

	cin >> n >> m;
	troco = m - n;
	deu_boa = false;

	}

}
