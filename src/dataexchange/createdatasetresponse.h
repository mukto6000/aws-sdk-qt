// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETRESPONSE_H
#define QTAWS_CREATEDATASETRESPONSE_H

#include "dataexchangeresponse.h"
#include "createdatasetrequest.h"

namespace QtAws {
namespace DataExchange {

class CreateDataSetResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT CreateDataSetResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    CreateDataSetResponse(const CreateDataSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDataSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSetResponse)
    Q_DISABLE_COPY(CreateDataSetResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
