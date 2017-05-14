#include "abstracvalidator.h"

AbstracValidator::AbstracValidator()
{
    errors.push_back("not error");
}

void AbstracValidator::addError(QString error)
{
    error.push_back(error);
}

QVector<QString> AbstracValidator::getErrors()
{
    return errors;
}
