#include "titulopagar.h"

TituloPagar::TituloPagar(QObject *parent) : QObject(parent)
{
      inicializar(0);
}

long long TituloPagar::sequencial() const
{
    return _sequencial;
}

void TituloPagar::setSequencial(long long sequencial)
{
    _sequencial = sequencial;
}

QString TituloPagar::numeroTitulo() const
{
    return _numeroTitulo;
}

void TituloPagar::setNumeroTitulo(const QString &numeroTitulo)
{
    _numeroTitulo = numeroTitulo;
}

double TituloPagar::valorTitulo() const
{
    return _valorTitulo;
}

void TituloPagar::setValorTitulo(double valorTitulo)
{
    _valorTitulo = valorTitulo;
}

double TituloPagar::valorDevedor() const
{
    return _valorDevedor;
}

void TituloPagar::setValorDevedor(double valorDevedor)
{
    _valorDevedor = valorDevedor;
}

QDate TituloPagar::dataEmissao() const
{
    return _dataEmissao;
}

void TituloPagar::setDataEmissao(const QDate &dataEmissao)
{
    _dataEmissao = dataEmissao;
}

QDate TituloPagar::dataVencimento() const
{
    return _dataVencimento;
}

void TituloPagar::setDataVencimento(const QDate &dataVencimento)
{
    _dataVencimento = dataVencimento;
}

int TituloPagar::status() const
{
    return _status;
}

void TituloPagar::setStatus(int status)
{
    _status = status;
}

void TituloPagar::inicializar(long long sequencial)
{
    this->_sequencial = sequencial;
    this->_valorTitulo = 0.0;
    this->_valorDevedor = 0.0;
    this->_status = this->STATUSPAGAR::ABERTO;
}
