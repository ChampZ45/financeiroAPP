#include "dbutil.h"
#include <QtSql/QSqlDatabase>

DButil::DButil(QObject *parent) : QObject(parent)
{

}

QSqlDatabase DButil::conexao()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/andre/Documentos/financeiro.db");
    db.open();

    return db;

}
