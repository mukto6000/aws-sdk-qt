// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DYNAMODBRESPONSE_P_H
#define QTAWS_DYNAMODBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DynamoDb {

class DynamoDbResponse;

class DynamoDbResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DynamoDbResponsePrivate(DynamoDbResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DynamoDbResponse)
    Q_DISABLE_COPY(DynamoDbResponsePrivate)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
