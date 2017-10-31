#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

using namespace std;

class Conta: public IConta
{
    public:
        Conta(string nomeCliente, double salarioMensal, string numeroConta, double saldo);
        virtual ~Conta();

        string getNomeCliente();
        void setNomeCliente(string nomeClient);

        double getSalarioMensal();
        void setSalarioMensal(double salMensal);

        string getNumeroConta();
        void setNumeroConta(string NumConta);

        double getSaldo();
        void setSaldo(double sald);

        double getLimite();
        void setLimite(double Limit);

        virtual void sacar(double );
        virtual void depositar(double );

        void definirLimite();

    private:
        string nomeCliente;
        double salarioMensal;
        string numeroConta;
        double saldo;
        double limite;

};

#endif // CONTA_H
