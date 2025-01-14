#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float a;
    cin >> a;

    float b;
    cin >> b;

    float c;
    cin >> c;

    float media;
    media = ((a * 2) + (b * 3) + (c * 5)) / 10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << endl;

}