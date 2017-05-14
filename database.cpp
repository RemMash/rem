#include "database.h"

DataBase::DataBase(QString host, QString user, QString passwd, QString dbName)
{
    db = new QSqlDatabase();

    db->addDatabase("QSQLITE");
    db->setHostName(host);
    db->setDatabaseName(dbName);
    db->setUserName(user);
    db->setPassword(passwd);
    db->setPort(3306);
}

void DataBase::createConnectToDb()
{
    bool connected = db->open();

    if (!connected)
    {
        QMessageBox::Abort;

        return;
    }
}
