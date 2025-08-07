#include <iostream>
#include <list>
#include <cmath>
using namespace std;

void quadratic_function() {
    int a, b, c;
    cout << "Bem vindo a Calculadora Quadrática" << endl;
    cout << "Ela utiliza a 'Fórmula de Bháskara'!" << endl << endl;
    cout << "Insira o 'a'(ax²): " << " "<< endl;
    cin >> a;
    cout << "Insira o 'b'(bx): " << endl;
    cin >> b;
    cout << "Insira o 'c'(c): " << endl;
    cin >> c;
    
    int delta = pow(b,2) - 4 * a * c;
    
    int x1 = (-b - sqrt(delta)) / (2 * a);
    int x2 = (-b + sqrt(delta)) / (2 * a);
    
    cout << "X1 = " << x1 << " , X2 = " << x2 << endl;
}

int main()
{
    quadratic_function();
    
    return 0;
}

