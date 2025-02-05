#include <iostream>

float funcao_multiplicacao(float multiplicador1, float multiplicador2);

int main(){
    float multiplicador1;
    float multiplicador2;

    std::cout << "escreva o primeiro numero: " << std::endl;
    std::cin >> multiplicador1;
    std::cout << "escreva o segundo numero para multiplicar com o primeiro: " << std::endl;
    std::cin >> multiplicador2;
    float resultado = funcao_multiplicacao(multiplicador1, multiplicador2);
    return 0;
}

float funcao_multiplicacao(float multiplicador1, float multiplicador2) {
    float resultado = multiplicador1 * multiplicador2;
    std::cout << "resultado: " << resultado << std::endl;
    return resultado;
}
