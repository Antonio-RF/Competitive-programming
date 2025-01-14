#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double a;
    cin >> a;

    double b;
    cin >> b;

    double media;
    media = ((a * 3.5) + (b * 7.5)) / 11;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << endl;

}