#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cin >> x;
    
    int k = static_cast<int>(x); 
    int y = round((x - k) * 100); 
    
    int cem = k / 100;
    k %= 100;

    int cinquenta = k / 50;
    k %= 50;

    int vinte = k / 20;
    k %= 20;

    int dez = k / 10;
    k %= 10;

    int cinco = k / 5;
    k %= 5;

    int dois = k / 2;
    k %= 2;

    int m_um = k; 

    int m_cinquenta = y / 50;
    y %= 50;

    int m_vintecinco = y / 25;
    y %= 25;

    int m_dez = y / 10;
    y %= 10;

    int m_cinco = y / 5;
    y %= 5;

    int m_umum = y;

    cout << "NOTAS:" << endl;
    cout << cem << " nota(s) de R$ 100.00" << endl;
    cout << cinquenta << " nota(s) de R$ 50.00" << endl;
    cout << vinte << " nota(s) de R$ 20.00" << endl;
    cout << dez << " nota(s) de R$ 10.00" << endl;
    cout << cinco << " nota(s) de R$ 5.00" << endl;
    cout << dois << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m_um << " moeda(s) de R$ 1.00" << endl;
    cout << m_cinquenta << " moeda(s) de R$ 0.50" << endl;
    cout << m_vintecinco << " moeda(s) de R$ 0.25" << endl;
    cout << m_dez << " moeda(s) de R$ 0.10" << endl;
    cout << m_cinco << " moeda(s) de R$ 0.05" << endl;
    cout << m_umum << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

