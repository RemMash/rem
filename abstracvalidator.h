#ifndef ABSTRACVALIDATOR_H
#define ABSTRACVALIDATOR_H

#include <QVector>
#include <QString>

class AbstracValidator
{
public:
    AbstracValidator();
public:
    void addError(QString error);
    QVector<QString> getErrors();
private:
    QVector<QString> errors;
};

#endif // ABSTRACVALIDATOR_H
