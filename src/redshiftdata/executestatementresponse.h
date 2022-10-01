// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTESTATEMENTRESPONSE_H
#define QTAWS_EXECUTESTATEMENTRESPONSE_H

#include "redshiftdataresponse.h"
#include "executestatementrequest.h"

namespace QtAws {
namespace RedshiftData {

class ExecuteStatementResponsePrivate;

class QTAWSREDSHIFTDATA_EXPORT ExecuteStatementResponse : public RedshiftDataResponse {
    Q_OBJECT

public:
    ExecuteStatementResponse(const ExecuteStatementRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExecuteStatementRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteStatementResponse)
    Q_DISABLE_COPY(ExecuteStatementResponse)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
