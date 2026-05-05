#include <vector>
#include <string>
#include <iostream>

struct Pessoa {
    std::string nome;
    int idade;

    // Construtor
    Pessoa(std::string n, int i) : nome(std::move(n)), idade(i) {
        std::cout << "Construtor chamado\n";
    }
};

int main() {
    std::vector<Pessoa> v;

    // Uso correto do emplace_back: passa argumentos diretamente
    v.emplace_back("Alice", 30); 
    
    // Equivalente com push_back (menos eficiente - cria temp):
    // v.push_back(Pessoa("Bob", 25));

    return 0;
}

