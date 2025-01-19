#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;

	for (int c=0 ; c<qntd ; c++) {
		
		int bonus, a1,d1,l1,a2,d2,l2;
		cin >> bonus;
		cin >> a1 >> d1 >> l1;
		cin >> a2 >> d2 >> l2;

		int v1,v2;
		
		if (l1 % 2 == 0) {
			v1 = ((a1 + d1) / 2) + bonus;
		}
		else {
			v1 = (a1 + d1) / 2;
		}

		if (l2 % 2 == 0) {
            v2 = ((a2 + d2) / 2) + bonus;
        }
        else {
            v2 = (a2 + d2) / 2;
        }

		if (v1 > v2) {
			cout << "Dabriel" << endl;
		}
		else if (v2 > v1) {
			cout << "Guarte" << endl;
		}
		else {
			cout << "Empate" << endl;
		}


	}


}
