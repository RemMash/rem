#include "signinvalidator.h"

SignInValidator::SignInValidator()
{
}

QVector<QString> SignInValidator::validate(QString error)
{
    if (error.size() < 3)
        this->addError(error);

    return this->getErrors();
}
