// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETRESPONSE_H
#define QTAWS_UPDATEDATASETRESPONSE_H

#include "dataexchangeresponse.h"
#include "updatedatasetrequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateDataSetResponsePrivate;

class QTAWSDATAEXCHANGE_EXPORT UpdateDataSetResponse : public DataExchangeResponse {
    Q_OBJECT

public:
    UpdateDataSetResponse(const UpdateDataSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSetResponse)
    Q_DISABLE_COPY(UpdateDataSetResponse)

};

} // namespace DataExchange
} // namespace QtAws

#endif
