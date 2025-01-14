#include <bits/stdc++.h>
using namespace std;

int main() {

	int casos;
	cin >> casos;

	for (int c = 0 ; c < casos ; c++) {
	
		int pop_a, pop_b, count;
		double taxa_a, taxa_b;
		cin >> pop_a >> pop_b >> taxa_a >> taxa_b;
		
		count = 0;
		while (pop_a <= pop_b) {
			
			pop_a += (pop_a * (taxa_a / 100.0));
			pop_b += (pop_b * (taxa_b / 100.0));
			count += 1;


			if (count > 100) {
				break;
				}
		}

		if (count > 100) {
				cout << "Mais de 1 seculo." << endl;
				}
		else {
				cout << count << " anos." << endl;
		}

	}

}
