#include <bits/stdc++.h>
using namespace std;


int main() {
	
	int num,count,nmr_caso;
    nmr_caso = 1;


	while (true) {
		count = 1;
		cin >> num;

		if (num == 0) {
			cout << "Caso " << nmr_caso << ": 1 numero" << endl;
			cout << 0 << endl;
		}
		else {

			for (int c=1 ; c < (num+1) ; c++) {
				count += c;
			}

			cout << "Caso " << nmr_caso << ": " << count << " numeros" << endl;
			
			
			cout << "0 ";
			for (int i=1 ; i <= num ; i++) {
				for (int k=1 ; k <= i ; k++) {
					
					if (i == num && k == i) {
						cout << i << " " << endl;
						break;
					}				

					if (i == 201) {
						cout << endl;
						break;
					}

					cout << i << " "; 
				}
			
			}
			
		}
		
		nmr_caso += 1;
	}	

}
