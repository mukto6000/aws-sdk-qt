// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALTABLERESPONSE_H
#define QTAWS_CREATEGLOBALTABLERESPONSE_H

#include "dynamodbresponse.h"
#include "createglobaltablerequest.h"

namespace QtAws {
namespace DynamoDb {

class CreateGlobalTableResponsePrivate;

class QTAWSDYNAMODB_EXPORT CreateGlobalTableResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    CreateGlobalTableResponse(const CreateGlobalTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGlobalTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGlobalTableResponse)
    Q_DISABLE_COPY(CreateGlobalTableResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
