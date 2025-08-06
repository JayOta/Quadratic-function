#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    
    std::cout<<"Hello World";

    return 0;
}

int quadratic_function(a, b, c) {
    float delta = pow(b,2) - 4 * a * c;
    
    x1 = (-b + sqrt(delta)) / 2 * a;
    x2 = (-b - sqrt(delta)) / 2 * a;
    
    return ["X1 = " << x1 << ", X2 = " << x2 << endl];
}