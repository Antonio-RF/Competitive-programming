#include <bits/stdc++.h>
using namespace std;

int pares[5];
int impares[5];


int main() {
	
	int countp, counti;
    countp = 0;
    counti = 0;
    int count = 0;
    int numero;
    while (count < 15) {

        cin >> numero;
        count += 1;

        if (numero % 2 == 0) {
            pares[countp] = numero;
            countp += 1;

            if (countp == 5) {
                for (int c = 0 ; c < countp ; c++) {
					cout << "par[" << c << "] = " << pares[c] << endl;
				
				}
				
				countp = 0;
            }

        }
        else {
            impares[counti] = numero;
            counti += 1;
			
			if (counti == 5) {
               for (int k = 0 ; k < counti ; k++) {
                   cout << "impar[" << k << "] = " << impares[k] << endl;

                }

               counti = 0;
            }
        }

        }
		 if (counti != 0) {
            for (int c = 0 ; c < counti ; c++) {
                   cout << "impar[" << c << "] = " << impares[c] << endl;

                }

            }


        if (countp != 0) {
            for (int k = 0 ; k < countp ; k++) {
                   cout << "par[" << k << "] = " << pares[k] << endl;

                }

            }
	}

