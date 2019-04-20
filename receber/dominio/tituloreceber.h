#ifndef TITULORECEBER_H
#define TITULORECEBER_H

#include <QObject>
#include <QDate>

class TituloReceber : public QObject
{
    Q_OBJECT
public:
    explicit TituloReceber(QObject *parent = nullptr);

    long long sequencial() const;
    void setSequencial(long long sequencial);

    bool isNovo();

private:

    void inicializar(long long sequencial);

    enum STATUSRECEBER{
        ABERTO = 0,
        CANCELADO = 98,
        QUITADO = 99
    };

    long long _sequencial;
    QString   _numeroTitulo;
    QDate     _dataEmissao;
    QDate     _dataVencimento;
    double    _valorTitulo;
    double    _valorDevedor;
    int       _status;

};

#endif // TITULORECEBER_H
