#include <iostream>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    int maior,menor;
    maior = (a + b + abs(a - b)) / 2;
    menor = (a + b - abs(a - b)) / 2;

    if (maior % menor == 0){
        cout << "Sao Multiplos" << endl;
    }
    else{
        cout << "Nao sao Multiplos" << endl;
    }
}