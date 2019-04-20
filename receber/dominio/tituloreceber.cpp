#include "tituloreceber.h"

TituloReceber::TituloReceber(QObject *parent) : QObject(parent)
{
  inicializar(0);
}

long long TituloReceber::sequencial() const
{
    return _sequencial;
}

void TituloReceber::setSequencial(long long sequencial)
{
    _sequencial = sequencial;
}

bool TituloReceber::isNovo()
{
    this->_sequencial == 0;
}

void TituloReceber::inicializar(long long sequencial)
{
   this->_sequencial = sequencial;
   this->_valorDevedor = 0.0;
   this->_valorTitulo = 0.0;
   this->_status = this->STATUSRECEBER::ABERTO;
}

