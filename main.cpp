#include "principal.h""
#include <QApplication>
#include "util/dbutil.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"

#include "qdebug.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    principal p;
    p.show();

    return a.exec();
}
