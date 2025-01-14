#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int raio;
    cin >> raio;

    double volume;
    volume = (4.0 / 3) * 3.14159 * raio * raio * raio;

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << volume << endl;

}
