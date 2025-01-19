#include <bits/stdc++.h>
using namespace std;

int main() {

	int p,j1,j2,r,a,soma;
	cin >> p >> j1 >> j2 >> r >> a;
	
	soma = j1 + j2;

	if (p == 1 and r == 0 and a == 0) {
		if (soma % 2 == 0) {
			cout << "Jogador 1 ganha!" << endl;
		}
		else {
			cout << "Jogador 2 ganha!" << endl;
		}
	}

	else if (p == 0 and r == 0 and a == 0) {
        if (soma % 2 == 0) {
            cout << "Jogador 2 ganha!" << endl;
        }
        else {
            cout << "Jogador 1 ganha!" << endl;
        }
    }

	
	else if (r == 1 and a == 0) {
		cout << "Jogador 1 ganha!" << endl;
	}

	else if (r == 1 and a == 1) {
            cout << "Jogador 2 ganha!" << endl;
    }
	
	else if (r == 0 and a == 1) {
        cout << "Jogador 1 ganha!" << endl;
    }

}
