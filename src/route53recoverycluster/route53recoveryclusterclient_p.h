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

#ifndef QTAWS_ROUTE53RECOVERYCLUSTERCLIENT_P_H
#define QTAWS_ROUTE53RECOVERYCLUSTERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterClient;

class Route53RecoveryClusterClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Route53RecoveryClusterClientPrivate(Route53RecoveryClusterClient * const q);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryClusterClient)
    Q_DISABLE_COPY(Route53RecoveryClusterClientPrivate)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
