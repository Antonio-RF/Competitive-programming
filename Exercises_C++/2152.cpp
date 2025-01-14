#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;

	for (int c=0 ; c<qntd ; c++) {
		int h,m,o;
		cin >> h >> m >> o;

		if (h >= 10 && m >= 10 && o == 0) {
			cout << h << ":" << m << " - A porta fechou!" << endl;
		}
		else if (h >= 10 && m >= 10 && o == 1) {
			cout << h << ":" << m << " - A porta abriu!" << endl;
		}
		else if (h < 10 && m >= 10 && o == 1) {
            cout << "0" <<  h << ":" << m << " - A porta abriu!" << endl;
        }
		else if (h < 10 && m >= 10 && o == 0) {
            cout << "0" <<  h << ":" << m << " - A porta fechou!" << endl;
        }
		else if (h >= 10 && m < 10 && o == 0) {
            cout << h << ":" << "0" << m << " - A porta fechou!" << endl;
        }
        else if (h >= 10 && m < 10 && o == 1) {
            cout << h << ":" << "0" << m << " - A porta abriu!" << endl;
        }
		else if (h < 10 && m < 10 && o == 0) {
            cout << "0" <<  h << ":" << "0" << m << " - A porta fechou!" << endl;
        }
        else if (h < 10 && m < 10 && o == 1) {
            cout << "0" << h << ":" << "0" << m << " - A porta abriu!" << endl;
        }
	}

}
