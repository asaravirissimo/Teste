#include <iostream>

int main() {
    int passos = 4;
    int* ponteiro_de_passos;

    ponteiro_de_passos = &passos; // ponteiro de passos = endereco (&) de passos
    std::cout << "o valor de passos eh: " << passos << std::endl;
    std::cout << "o endereco de passos eh: " << &passos << std::endl;

    std::cout << "o valor de ponteiro_de_passos eh: " << ponteiro_de_passos << std::endl;
    std::cout << "o conteudo do endereco de ponteiro_de_passos eh: " << *ponteiro_de_passos << std::endl;

    //*ponteiro_de_passos (estou trasnformando ponteiro em variavel)= passos
    *ponteiro_de_passos = 7; // igual a: passos = 7
    std::cout << "o novo conteudo do endereco de ponteiro_de_passos eh: " << *ponteiro_de_passos << std::endl;
    std::cout << "o novo valor de passos eh: " << passos << std::endl;
    std::cout << "o endereco de passos eh: " << &passos << std::endl;
    std::cout << "o valor de ponteiro_de_passos eh: " << ponteiro_de_passos << std::endl;
    
    ponteiro_de_passos = ponteiro_de_passos + 10; // absolutamente proibido fazer isso (mudar o endereco do ponteiro manualmente)
    std::cout << "o valor de ponteiro_de_passos eh: " << ponteiro_de_passos << std::endl;

    std::cout << "o conteudo do endereco de ponteiro_de_passos + 1 eh: " << *ponteiro_de_passos << std::endl;

}