#ifndef DBUTIL_H
#define DBUTIL_H

#include <QObject>
#include <QtSql/QSqlDatabase>

class DButil : public QObject
{
    Q_OBJECT
public:
    explicit DButil(QObject *parent = nullptr);

    static QSqlDatabase conexao();

private:

};

#endif // DBUTIL_H
