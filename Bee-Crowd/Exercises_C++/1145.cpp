#include <bits/stdc++.h>
using namespace std;

int main() {

	int x,y;
	cin >> x >> y;

	int vetor[y+1];
	for (int c = 1 ; c <= y ; c++) {
		vetor[c] = c;
	}
	int count = 1;
	for (int k = 1 ; k <= y ; k++) {
		for (int i = 0 ; i < x ; i++) {
			cout << vetor[count] << " ";
			 if (count == (y-1)) {
                break;
            }
			count += 1;

		}

		if (count == (y-1)) {
                break;
            }
		cout << endl;
	}
	
	cout << y << "\n" << endl;
}
