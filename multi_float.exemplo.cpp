/*
1. escreva uma funcao que recebe como argumento 3 numeros do tipo float e retorna o
resultado da multiplicacao desses 3 numeros.
2. os 3 argumentos da funcao sao inputados pelo usuario
3. o resultdo da multiplicacao eh impresso na tela
*/



#include <iostream>

float funcao_multiplicacao(float numero1, float numero2, float numero3);

int main(){
    float numero1;
    float numero2;
    float numero3;

    std::cout << "escreva o primeiro numero: " << std::endl;
    std::cin >> numero1;
    std::cout << "escreva o segundo numero para multiplicar com o primeiro: " << std::endl;
    std::cin >> numero2;
    std::cout << "escreva o terceiro numero para multiplicar com os dois primeiros" << std::endl;
    std::cin >> numero3;
    float resultado = funcao_multiplicacao(numero1, numero2, numero3);
    return 0;
}

float funcao_multiplicacao(float numero1, float numero2, float numero3) {
    float resultado = numero1 * numero2 * numero3;
    std::cout << "resultado: " << resultado << std::endl;
    return resultado;
}
