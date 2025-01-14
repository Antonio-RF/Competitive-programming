#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {

	int numero;
	double n,m;

	cin >> numero;

	n = numero / log(numero);
	m = 1.25506 * n;

	printf("%.1f %.1f\n",n,m);
}
