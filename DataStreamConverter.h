
#ifndef DATASTREAM_CONVERTER_H
#define DATASTREAM_CONVERTER_H

#include "messages.h"
#include <QDataStream>

QDataStream& operator<<(QDataStream &dataStream, const Identifier &id)
{
    dataStream << int(id._id);
    return dataStream;
};

QDataStream& operator>>(QDataStream &dataStream, Identifier &id)
{
    int identifier;
    dataStream >> identifier;
    id._id = (MessageIdentifier)identifier;
    return dataStream;
};

QDataStream& operator<<(QDataStream &dataStream, const Login &login)
{
    dataStream << login._name;
    return dataStream;
};

QDataStream& operator>>(QDataStream &dataStream, Login &login)
{
    dataStream >> login._name;
    return dataStream;
};

#endif
