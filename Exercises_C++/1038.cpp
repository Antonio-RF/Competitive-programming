#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int codigo, qntd;
    cin >> codigo >> qntd;

    if (codigo == 1){
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << qntd * 4.0 << endl;
    }
    if (codigo == 2){
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << qntd * 4.5 << endl;
    }
    if (codigo == 3){
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << qntd * 5.0 << endl;
    }
    if (codigo == 4){
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << qntd * 2.0 << endl;
    }
    if (codigo == 5){
        cout << fixed << setprecision(2);
        cout << "Total: R$ " << qntd * 1.5 << endl;
    }

}