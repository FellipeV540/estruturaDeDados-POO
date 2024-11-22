#include <iostream>
#include <vector>
using namespace std;

class ItemBiblioteca {
protected:
    string titulo;
    int ano;

public:
    // Construtor
    ItemBiblioteca(const string& titulo, int ano) : titulo(titulo), ano(ano) {}

    // Métodos para definir e obter o título
    void setTitulo(const string& titulo) { this->titulo = titulo; }
    string getTitulo() const { return titulo; }

    // Métodos para definir e obter o ano
    void setAno(int ano) { this->ano = ano; }
    int getAno() const { return ano; }

    // Método virtual para exibir detalhes (a ser sobrescrito)
    virtual void exibirDetalhes() const = 0;

    // Destrutor virtual
    virtual ~ItemBiblioteca() = default;
};

class Livro : public ItemBiblioteca {
private:
    string autor;

public:
    // Construtor
    Livro(const string& titulo, int ano, const string& autor)
        : ItemBiblioteca(titulo, ano), autor(autor) {}

    // Métodos para definir e obter o autor
    void setAutor(const string& autor) { this->autor = autor; }
    string getAutor() const { return autor; }

    // Sobrescrita do método exibirDetalhes
    void exibirDetalhes() const override {
        cout << "Livro: " << titulo << ", Ano: " << ano << ", Autor: " << autor << endl;
    }
};
class Revista : public ItemBiblioteca {
private:
    int edicao;

public:
    // Construtor
    Revista(const string& titulo, int ano, int edicao)
        : ItemBiblioteca(titulo, ano), edicao(edicao) {}

    // Métodos para definir e obter a edição
    void setEdicao(int edicao) { this->edicao = edicao; }
    int getEdicao() const { return edicao; }

    // Sobrescrita do método exibirDetalhes
    void exibirDetalhes() const override {
        cout << "Revista: " << titulo << ", Ano: " << ano << ", Edicao: " << edicao << endl;
    }
};
class Biblioteca {
private:
    vector<ItemBiblioteca*> itens;

public:
    void adicionarItem(ItemBiblioteca* item) {
        itens.push_back(item);
    }

    void exibirTodosItens() const {
        for (const auto& item : itens) {
            item->exibirDetalhes();
        }
    }

    friend void removerItemPorTitulo(Biblioteca& biblioteca, const string& titulo);
};

bool operator==(const Livro& a, const Livro& b) {
    return a.getTitulo() == b.getTitulo() && a.getAutor() == b.getAutor();
}

void removerItemPorTitulo(Biblioteca& biblioteca, const string& titulo) {
    auto& itens = biblioteca.itens;
    for (auto it = itens.begin(); it != itens.end(); ++it) {
        if ((*it)->getTitulo() == titulo) {
            delete *it;
            itens.erase(it);
            cout << "Item com o titulo \"" << titulo << "\" foi removido." << endl;
            return;
        }
    }
    cout << "Item com o titulo \"" << titulo << "\" nao encontrado." << endl;
}

int main() {
    Biblioteca biblioteca;

    // Adicionando livros e revistas
    biblioteca.adicionarItem(new Livro("O Senhor dos Aneis", 1954, "J.R.R. Tolkien"));
    biblioteca.adicionarItem(new Livro("Dom Quixote", 1605, "Miguel de Cervantes"));
    biblioteca.adicionarItem(new Revista("Revista Cientifica", 2023, 12));
    biblioteca.adicionarItem(new Revista("Tecnologia Hoje", 2022, 5));

    // Exibindo todos os itens
    cout << "Itens na biblioteca:" << endl;
    biblioteca.exibirTodosItens();

    // Removendo um item por título
    removerItemPorTitulo(biblioteca, "Dom Quixote");

    // Exibindo itens após remoção
    cout << "\nItens na biblioteca apos remocao:" << endl;
    biblioteca.exibirTodosItens();

    return 0;
}