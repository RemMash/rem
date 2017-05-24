//#include "database.h"

//DataBase::DataBase(QString host, QString user, QString passwd, QString dbName)
//{
//    db = new QSqlDatabase();

//    db->addDatabase("QMYSQL");
//    db->setHostName(host);
//    db->setDatabaseName(dbName);
//    db->setUserName(user);
//    db->setPassword(passwd);
//    db->setPort(3306);

//    if (!this->connectDb())
//        QMessageBox::critical(nullptr, "Error", "Error connecting to database");
//}

//bool DataBase::connectDb()
//{
//    bool connected = this->db->open();

//    if (!connected)
//        return false;

//    return true;
//}


//bool DataBase::selectIntoDb()
//{
//    QSqlQuery *query = new QSqlQuery(*this->db);

//    query->exec("SELECT passwords.password FROM passwords WHERE passwords.id = 1");

//    while (query->next())
//    {
//        QString passwd = query->value(0).toString();

//        qDebug() << passwd;
//    }
//}
