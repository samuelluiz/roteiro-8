#include "Conta.h"
#include <string>

using namespace std;

Conta::Conta(string n, double sm, string nc, double s)
{
    setNomeCliente(n);
    setSalarioMensal(sm);
    setNumeroConta(nc);
    setSaldo(s);
}


void Conta::setNomeCliente(string nomeClient)
{
    nomeCliente = nomeClient;
}
string Conta::getNomeCliente()
{
    return nomeCliente;
}


void Conta::setSalarioMensal(double salMensal)
{
    if(salMensal > 0)
        {
            salarioMensal = salmensal;
        }
}
double Conta::getSalarioMensal()
{
    return salarioMensal;
}


void Conta::setNumeroConta(string numConta)
{
    numeroConta = numConta;
}
string Conta::getNumeroConta()
{
    return numeroConta;
}


void Conta::setSaldo(double sald)
{
    if(sald > 0)
    {
        saldo = sald;
    }
}
double Conta::getSaldo();
{
    return saldo;
}


void Conta::setLimite(double limit)
{
    if(limit > 0)
    {
        limite = limit;
    }
}
double Conta::setLimite()
{
    return limite;
}


void Conta::sacar(double valor)
{
    if(valor > saldo)
        {
            cout << "Erro - Valor maior que o Saldo disponivel" << endl;
        } else {
            saldo = saldo - valor;
        }
}


void Conta::depositar(double valor)
{
    if(valor < 0)
    {
        cout << "Valor negativo." << endl;
    } else {
        saldo = saldo + valor;
    }
}
void Conta::definirLimite(){
    Limite = (salarioMensal*2);
}


Conta::~Conta()
{
    //dtor
}
