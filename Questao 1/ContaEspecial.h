#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"
#include <string>

using namespace std;

class ContaEspecial: public Conta
{
    public:
        ContaEspecial(string nomeCliente, double salarioMensal, string numeroConta, double saldo);
        virtual ~ContaEspecial();
        virtual void definirLimite();
    private:
};

#endif // CONTAESPECIAL_H
