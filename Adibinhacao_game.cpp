#include <iostream>

int jogo_adivinhacao (); 

int main() {
    std::cout << "***** JOGO DA ADIVINHACAO *****" << std::endl;
    std::cout << "Chute um numero de 1 a 100 e veja quantas tentativas precisa para acertar." << std::endl; 
    int tentativas = jogo_adivinhacao();

    return 0;
}

int jogo_adivinhacao() {
    int numero, chute, tentativas;
    srand(time(0)); //Gera um número aleatório diferente a cada execução
    numero = rand() % 100 + 1;
    
    do {   
        std::cout << "faz teu chute: ";
        std::cin >> chute; 
        if(chute < numero) {
            std::cout << "muito baixo chuta mais alto" << std::endl;
        } else if(chute > numero) {
            std::cout << "muito alto, chuta baixo" << std::endl;
        } else {
            std::cout << "parabens meu parca, tu eh o bichao memu" << std::endl;
        }
        
    } while (numero != chute);
    
    return tentativas;
}
