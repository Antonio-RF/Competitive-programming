#include <bits/stdc++.h>
using namespace std;

int main() {

	int correto,count;
	cin >> correto;
	count = 0;

	int vetor[5];
	for (int c=0 ; c < 5 ; c++) {

		cin >> vetor[c];
		if (vetor[c] == correto) {
			count += 1;
		}

	}

	

	cout << count << endl;
}
