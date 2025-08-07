#include <iostream>
#include <list>
#include <cmath>
#include <map>
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

int delta(int a, int b, int c) {
 int delta = pow(b, 2) - 4 * a * c;
 int ac = a * c;
 string b_passo2 = b << "²"; // Arrumar
 map<int, string> passo1 = {{a, "a"}, {b, "b²"}, {c, "c"}};
 map<int, int> passo2 = {{a, a}, {b, b}, {c, c}};
 map<int, int> passo3 = {{a, a}, {b, pow(b, 2)}, {c, c}};
 map<int, int> passo4 = {{ac, ac}, {b, b}};

 // Pensar em como acessar ->
 cout << "Δ = " << passo1[0][1] << "-4 * " << passo1[0][0] << " * " << passo1[0][2];
 cout << "Δ = " << passo2[0][1] << "-4 * " << passo2[0][0] << " * " << passo2[0][2];
 cout << "Δ = " << passo3[0][1] << "-4 * " << passo2[0][0] << " * " << passo2[0][2];


 
}