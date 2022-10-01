// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXPORTRESPONSE_H
#define QTAWS_GETEXPORTRESPONSE_H

#include "apigatewayresponse.h"
#include "getexportrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetExportResponsePrivate;

class QTAWSAPIGATEWAY_EXPORT GetExportResponse : public ApiGatewayResponse {
    Q_OBJECT

public:
    GetExportResponse(const GetExportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetExportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExportResponse)
    Q_DISABLE_COPY(GetExportResponse)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
