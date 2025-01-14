#include <bits/stdc++.h>
using namespace std;

int vetor[1000];

int main() {

	int numero,count;
	cin >> numero;
	
	count = 0;
	while (count < 1000) {
		for (int k = 0 ; k < numero ; k++) {
			cout << "N[" << count << "] = " << k << endl;
			 if (count == 999) {
                count += 1;
                break;
            }
			count += 1;
		}
	}
}
