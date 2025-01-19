#include <bits/stdc++.h>
using namespace std;

int main() {


	int a,b,c;
	cin >> a >> b >> c;

	if ((a - b) > 0 && (b - c) <= 0) {
		cout << ":)" << endl;
	}

	else if ((a - b) < 0 && (b - c) >= 0) {
        cout << ":(" << endl;
    }

	else if ((a - b) < 0 && (b - c) < 0 && (b - a) > (c - b)) {
        cout << ":(" << endl;
    }

	else if ((a - b) < 0 && (b - c) < 0 && (b - a) <= (c - b)) {
        cout << ":)" << endl;
    }




	else if ((a - b) > 0 && (b - c) > 0 && (a - b) > (b - c)) {
        cout << ":)" << endl;
    }

	else if ((a - b) > 0 && (b - c) > 0 && (a - b) <= (b - c)) {
        cout << ":(" << endl;
    }



	else if ((a - b) == 0 && (b - c) < 0) {
        cout << ":)" << endl;
    }

	else if ((a - b) == 0 && (b - c) > 0) {
        cout << ":(" << endl;
    }

}
