// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYRESULTSRESPONSE_H
#define QTAWS_GETQUERYRESULTSRESPONSE_H

#include "athenaresponse.h"
#include "getqueryresultsrequest.h"

namespace QtAws {
namespace Athena {

class GetQueryResultsResponsePrivate;

class QTAWSATHENA_EXPORT GetQueryResultsResponse : public AthenaResponse {
    Q_OBJECT

public:
    GetQueryResultsResponse(const GetQueryResultsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQueryResultsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQueryResultsResponse)
    Q_DISABLE_COPY(GetQueryResultsResponse)

};

} // namespace Athena
} // namespace QtAws

#endif
