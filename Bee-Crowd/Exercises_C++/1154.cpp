#include <bits/stdc++.h>
using namespace std;

int main() {


	int idade;
	cin >> idade;
	
	double media;
	int count,soma;
		count = 0;
	soma = 0;

	while (idade >= 0) {
		
		soma += idade;
		cin >> idade;
		count += 1;

	}
	
	media = ((soma * 1.0) / count);

	printf("%.2f\n", media );


}


