#include <iostream>
#include <cstdlib>
#include <ctime>

int jogo_adivinhacao (); 

int main() {
    std::cout << "***** JOGO DA ADIVINHACAO *****" << std::endl;
    std::cout << "Chute um numero de 1 a 100 e veja quantas tentativas precisa para acertar." << std::endl; 
    int tentativas = jogo_adivinhacao();
    
    //int tentativas = 

    return 0;
}

int jogo_adivinhacao() {
    int numero, chute, tentativas = 0;
    do { //O comando do-while permite que um certo trecho de programa seja executado ENQUANTO uma certa condição for verdadeira.
        std::cout << "faz teu chute: ";
        std::cin >> chute;
        tentativas++;
        srand(time(0)); //Usado para geerar um número aleatório diferente a cada execução em cada execucao
        numero = rand() % 100 + 1;
    if(chute < numero) {
        std::cout << "muito baixo chuta mais alto" << std::endl;
    } else if(chute > numero) {
        std::cout << "muito alto, chuta baixo" << std::endl;
    } else {
        chute == numero;
        std::cout << "parabens meu parca, tu eh o bichao memu" << std::endl; }
    } while(chute != numero);
    
    return tentativas;
}
