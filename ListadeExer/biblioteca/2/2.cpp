#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Funcionario {
private:
    string nome;
    double salario;

public:
    Funcionario(const string& nome, double salario)
        : nome(nome), salario(salario) {}

    void setNome(const string& nome) { this->nome = nome; }
    string getNome() const { return nome; }

    void setSalario(double salario) { this->salario = salario; }
    double getSalario() const { return salario; }

    virtual double calcularPagamento() const = 0; // Método virtual puro

    virtual ~Funcionario() = default;

    // Sobrecarga do operador <
    bool operator<(const Funcionario& outro) const {
        return this->salario < outro.salario;
    }
};
class Gerente : public Funcionario {
private:
    double bonus;

public:
    Gerente(const string& nome, double salario, double bonus)
        : Funcionario(nome, salario), bonus(bonus) {}

    void setBonus(double bonus) { this->bonus = bonus; }
    double getBonus() const { return bonus; }

    double calcularPagamento() const override {
        return getSalario() + bonus;
    }
};

class Engenheiro : public Funcionario {
private:
    int projetos;

public:
    Engenheiro(const string& nome, double salario, int projetos)
        : Funcionario(nome, salario), projetos(projetos) {}

    void setProjetos(int projetos) { this->projetos = projetos; }
    int getProjetos() const { return projetos; }

    double calcularPagamento() const override {
        const double valorPorProjeto = 500.0; // Valor fixo por projeto
        return getSalario() + projetos * valorPorProjeto;
    }
};
class Empresa {
private:
    vector<Funcionario*> funcionarios;

public:
    void adicionarFuncionario(Funcionario* func) {
        funcionarios.push_back(func);
    }

    void exibirPagamentosTotais() const {
        double total = 0.0;
        for (const auto& func : funcionarios) {
            double pagamento = func->calcularPagamento();
            cout << "Funcionario: " << func->getNome()
                 << ", Pagamento: " << pagamento << endl;
            total += pagamento;
        }
        cout << "Pagamento total da empresa: " << total << endl;
    }

    friend void aumentarSalarioPorNome(Empresa& empresa, const string& nome, double aumento);

    ~Empresa() {
        for (auto& func : funcionarios) {
            delete func;
        }
    }
};

// Função amiga para aumentar o salário
void aumentarSalarioPorNome(Empresa& empresa, const string& nome, double aumento) {
    for (auto& func : empresa.funcionarios) {
        if (func->getNome() == nome) {
            func->setSalario(func->getSalario() + aumento);
            cout << "Salario de " << nome << " aumentado para " << func->getSalario() << endl;
            return;
        }
    }
    cout << "Funcionario com nome " << nome << " nao encontrado." << endl;
}

int main() {
    Empresa empresa;

    // Adicionando funcionários
    empresa.adicionarFuncionario(new Gerente("Alice", 10000, 2000));
    empresa.adicionarFuncionario(new Engenheiro("Bob", 8000, 3));
    empresa.adicionarFuncionario(new Engenheiro("Carlos", 7000, 5));

    // Exibindo pagamentos totais
    cout << "Pagamentos antes do aumento:" << endl;
    empresa.exibirPagamentosTotais();

    // Aumentando salário por nome
    aumentarSalarioPorNome(empresa, "Bob", 1500);

    // Exibindo pagamentos após aumento
    cout << "\nPagamentos depois do aumento:" << endl;
    empresa.exibirPagamentosTotais();

    return 0;
}