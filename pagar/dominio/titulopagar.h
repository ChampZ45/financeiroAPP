#ifndef TITULOPAGAR_H
#define TITULOPAGAR_H

#include <QObject>
#include <QDate>

class TituloPagar : public QObject
{
    Q_OBJECT
public:
    explicit TituloPagar(QObject *parent = nullptr);

    enum STATUSPAGAR{
        ABERTO = 0,
        CANCELADO = 98,
        QUITADO = 99
    };
    long long sequencial() const;
    void setSequencial(long long sequencial);

    QString numeroTitulo() const;
    void setNumeroTitulo(const QString &numeroTitulo);

    double valorTitulo() const;
    void setValorTitulo(double valorTitulo);

    double valorDevedor() const;
    void setValorDevedor(double valorDevedor);

    QDate dataEmissao() const;
    void setDataEmissao(const QDate &dataEmissao);

    QDate dataVencimento() const;
    void setDataVencimento(const QDate &dataVencimento);

    int status() const;
    void setStatus(int status);

private:
    void inicializar(long long sequencial);


    long long _sequencial;
    QString   _numeroTitulo;
    double    _valorTitulo;
    double    _valorDevedor;
    QDate     _dataEmissao;
    QDate     _dataVencimento;
    int       _status;

};

#endif // TITULOPAGAR_H
