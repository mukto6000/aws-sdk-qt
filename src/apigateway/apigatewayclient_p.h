// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYCLIENT_P_H
#define QTAWS_APIGATEWAYCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ApiGateway {

class ApiGatewayClient;

class ApiGatewayClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ApiGatewayClientPrivate(ApiGatewayClient * const q);

private:
    Q_DECLARE_PUBLIC(ApiGatewayClient)
    Q_DISABLE_COPY(ApiGatewayClientPrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif
