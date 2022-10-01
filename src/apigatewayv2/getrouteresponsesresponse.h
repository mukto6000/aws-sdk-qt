// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSESRESPONSE_H
#define QTAWS_GETROUTERESPONSESRESPONSE_H

#include "apigatewayv2response.h"
#include "getrouteresponsesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponsesResponsePrivate;

class QTAWSAPIGATEWAYV2_EXPORT GetRouteResponsesResponse : public ApiGatewayV2Response {
    Q_OBJECT

public:
    GetRouteResponsesResponse(const GetRouteResponsesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRouteResponsesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteResponsesResponse)
    Q_DISABLE_COPY(GetRouteResponsesResponse)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif
