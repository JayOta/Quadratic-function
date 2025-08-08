#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

int deltaFunc(int a, int b, int c) {

    int delta = pow(b,2) - 4 * (a * c);
    return delta;
}

void show_delta(int a, int b, int c) {
 int delta = deltaFunc(a, b, c);
 int ac = a * c;
 int quatro_menos_ac = -4 * ac;
 map<int, string> passo1 = {{a, "a"}, {b, "b²"}, {c, "c"}};
 map<int, int> passo2 = {{a, a}, {b, b}, {c, c}};
 map<int, int> passo3 = {{a, a}, {b, pow(b, 2)}, {c, c}};
 map<int, int> passo4 = {{ac, ac}, {b, pow(b, 2)}};


 cout << "Δ = " << passo1[b] << " - 4 * " << passo1[a] << " * " << passo1[c] << endl;
 cout << "Δ = " << passo2[b] << "² " <<"- 4 * " << passo2[a] << " * " << passo2[c] << endl;
 cout << "Δ = " << passo3[b] << " - 4 * " << passo3[a] << " * " << passo3[c] << endl;

 if(quatro_menos_ac > 0 || quatro_menos_ac == 0){
     cout << "Δ = " << passo4[b] << " + " << quatro_menos_ac << endl;
 } else {
     cout << "Δ = " << passo4[b] << quatro_menos_ac << endl;
 }
 cout << "Δ = " << delta << endl;

}
double quadratic_func_x1(int a, int b, int c){
    int delta = deltaFunc(a, b, c);
    double x1 = (-b + sqrt(delta)) / (2 * a);
    return x1;
}

double quadratic_func_x2(int a, int b, int c){
    int delta = deltaFunc(a, b, c);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    return x2;
}

void show_x1(int a, int b, int c){
    int delta_int = deltaFunc(a, b, c);
    double x1 = quadratic_func_x1(a, b, c);
    vector<string> parte = {"Δ","1.", "2.", "3.", "4.", "5."};
    map<int, string> passo1 = {{a, "a"}, {b, "-b"}};
    map<int, int> passo2 = {{a, a}, {b, b}, {delta_int, delta_int}};
    map<int, int> passo3 = {{a, a}, {b, b}, {delta_int, sqrt(delta_int)}};
    map<int, int> passo4 = {{a, a}, {b, b}, {delta_int, sqrt(delta_int)}};
    map<int, int> passo5 = {{delta_int, delta_int}};

    cout << "x1:" << endl << endl;
    cout << parte[1] << " x1 = " << "(" << passo1[b] << " + "<< "√" << parte[0] << ") " << "/ " << "(" << 2 << " * " << passo1[a] << ")" << endl;
    cout << parte[2] << " x1 = " << "(" << "-(" << passo2[b] << ") + " << "√" << passo2[delta_int] << ") " << "/ " << "(" << 2 << " * " << passo2[a] << ")" << endl;
    cout << parte[3] << " x1 = " << "(" << "-(" << passo3[b] << ") + " << passo3[delta_int] << ") " << "/ " << "(" << 2 << " * " << passo3[a] << ")" << endl;
    cout << parte[4] << " x1 = " << "(" << "-(" << passo4[b] << ") + " << passo4[delta_int] << ") " << "/ " << 2 * passo4[a] << endl;
    cout << parte[5] << " x1 = " << setprecision(2) << x1 << endl;
  
}

void show_x2(int a, int b, int c){
    int delta_int = deltaFunc(a, b, c);
    double x2 = quadratic_func_x2(a, b, c);
    vector<string> parte = {"Δ","1.", "2.", "3.", "4.", "5."};
    map<int, string> passo1 = {{a, "a"}, {b, "-b"}};
    map<int, int> passo2 = {{a, a}, {b, b}, {delta_int, delta_int}};
    map<int, int> passo3 = {{a, a}, {b, b}, {delta_int, sqrt(delta_int)}};
    map<int, int> passo4 = {{a, a}, {b, b}, {delta_int, sqrt(delta_int)}};
    map<int, int> passo5 = {{delta_int, delta_int}};

    cout << "x2:" << endl << endl;
    cout << parte[1] << " x2 = " << "(" << passo1[b] << " - "<< "√" << parte[0] << ") " << "/ " << "(" << 2 << " * " << passo1[a] << ")" << endl;
    cout << parte[2] << " x2 = " << "(" << "-(" << passo2[b] << ") - " << "√" << passo2[delta_int] << ") " << "/ " << "(" << 2 << " * " << passo2[a] << ")" << endl;
    cout << parte[3] << " x2 = " << "(" << "-(" << passo3[b] << ") - " << passo3[delta_int] << ") " << "/ " << "(" << 2 << " * " << passo3[a] << ")" << endl;
    cout << parte[4] << " x2 = " << "(" << "-(" << passo4[b] << ") - " << passo4[delta_int] << ") " << "/ " << 2 * passo4[a] << endl;
    cout << parte[5] << " x2 = " << setprecision(2) << x2 << endl;
  
}

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
    cout << endl;
    cout << "Com isso a fórmula de Bhaskara ficou: " << endl;
    cout << "(-(b) +/- sqrt(b² - 4ac)) / (2a)  ->  ";
    cout << "(-(" << b << ") +/- sqrt(" << b << "² - 4 * " << a << " * " << c << ")) / (2 * " << a << ")" << endl << endl;
    

    cout << "Delta:" << endl << endl; 
    show_delta(a, b, c);
    cout << endl;
    show_x1(a, b, c);
    cout << endl;
    show_x2(a, b, c);
    double x1 = quadratic_func_x1(a, b, c);
    double x2 = quadratic_func_x2(a, b, c);
    if (x1 == x2){
        cout << endl << "x1 = x2 = " << setprecision(2) << x1 << endl;
    } else {
        cout << endl << "x1 = " << setprecision(2) << x1 << ", x2 = " << setprecision(2) << x2 << endl << endl;
    }

}
int main()
{
    quadratic_function();

    return 0;
}

