#ifndef SIGNINVALIDATOR_H
#define SIGNINVALIDATOR_H

#include "abstracvalidator.h"
#include <QString>


class SignInValidator: public AbstracValidator
{
public:
    SignInValidator();


    QVector<QString> validate(QString error);
private:
    const QString small_passwrod = "Small password";
};

#endif // SIGNINVALIDATOR_H
