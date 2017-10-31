#include "ContaEspecial.h"
#include "Conta.h"
#include <string>

using namespace std;

ContaEspecial::ContaEspecial(string n, double sm, string nc, double s)
{
    setNomeCliente(n);
    setSaldo(sm);
    setNumeroConta(nc);
    setSaldo(s);
}

void ContaEspecial::definirLimite()
{
    setLimite(getSalarioMensal()*3);
}

ContaEspecial::~ContaEspecial()
{
    //dtor
}
