/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MARKETPLACEENTITLEMENTSERVICECLIENT_H
#define QTAWS_MARKETPLACEENTITLEMENTSERVICECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmarketplaceentitlementserviceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MarketplaceEntitlementService {

class MarketplaceEntitlementServiceClientPrivate;
class GetEntitlementsRequest;
class GetEntitlementsResponse;

class QTAWSMARKETPLACEENTITLEMENTSERVICE_EXPORT MarketplaceEntitlementServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MarketplaceEntitlementServiceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MarketplaceEntitlementServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetEntitlementsResponse * getEntitlements(const GetEntitlementsRequest &request);

protected:
    /// @cond internal
    MarketplaceEntitlementServiceClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit MarketplaceEntitlementServiceClient(MarketplaceEntitlementServiceClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MarketplaceEntitlementServiceClient)
    Q_DISABLE_COPY(MarketplaceEntitlementServiceClient)

};

} // namespace MarketplaceEntitlementService
} // namespace QtAws

#endif
