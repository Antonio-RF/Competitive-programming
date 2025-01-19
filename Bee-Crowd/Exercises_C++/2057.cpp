#include <bits/stdc++.h>
using namespace std;

int main() {

	int saida, tempo, fuso;
	cin >> saida >> tempo >> fuso;
	
	int resposta;

		if ((saida + tempo + fuso) < 24 and (saida + tempo + fuso) >= 0){
			resposta = saida + tempo + fuso;
			cout << resposta << endl;
		}
		else if ((saida + tempo + fuso) > 24){
		    resposta = abs(24 - (saida + tempo + fuso));
       		cout << resposta << endl;
		}
		else if ((saida + tempo + fuso) < 0){
            resposta = abs(24 + (saida + tempo + fuso));
            cout << resposta << endl;
        }	

}
