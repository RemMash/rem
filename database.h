#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql/QSqlDatabase>
#include <QException>
#include <QMessageBox>

class DataBase
{
public:
    DataBase(QString host, QString user, QString passwd, QString dbName);
private:
    QSqlDatabase *db;
public:
    void createConnectToDb();
};

#endif // DATABASE_H
