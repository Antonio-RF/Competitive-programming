#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float a,b,c;
    cin >> a >> b >> c;

    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        cout << fixed << setprecision(1);
        cout << "Perimetro = " << a + b + c << endl;
    }
    else{
        cout << fixed << setprecision(1);
        cout << "Area = " << ((a + b) * c) / 2 << endl;
    }
}