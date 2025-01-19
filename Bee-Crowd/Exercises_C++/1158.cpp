#include <bits/stdc++.h>
using namespace std;

int main() {

	int qntd;
	cin >> qntd;
	
	int count, soma;
	count = 0;

	while (count < qntd) {
		
		soma = 0;
		int x,y;
		cin >> x >> y;

		int count2;
		count2 = 0;
		if (x % 2 == 0){
				
				x += 1;

		}


		while (count2 < y) {

                soma += x;
                x += 2;
                count2 += 1;
				}

		cout << soma << endl;

		count += 1;

	}




}
