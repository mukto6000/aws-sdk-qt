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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTCLIENT_P_H
#define AWSABSTRACTCLIENT_P_H

#include "awsregion.h"

#include <QSet>

class QNetworkAccessManager;
class QUrl;

namespace QtAws {
namespace Core {

class AwsAbstractClient;
class AwsAbstractCredentials;
class AwsAbstractRequest;
class AwsAbstractSignature;

// Exported for *internal* use by other QtAws modules only.
class QTAWSCORE_EXPORT AwsAbstractClientPrivate {

public:
    QString apiVersion;                           ///< Amazon service API version.
    AwsAbstractCredentials * credentials;         ///< Amazon credentials.
    QUrl endpoint;                                ///< Amazon service endpoint.
    QString endpointPrefix;                       ///< Amazon service endpoint.
    QNetworkAccessManager * networkAccessManager; ///< Network access manager.
    AwsRegion::Region region;                     ///< Amazon service region.
    QString serviceFullName;                      ///< Amazon service full name.
    QString serviceName;                          ///< Amazon service name.
    AwsAbstractSignature * signature;             ///< Amazon signature object.

    explicit AwsAbstractClientPrivate(AwsAbstractClient * const q);

    virtual ~AwsAbstractClientPrivate();

protected:
    AwsAbstractClient * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AwsAbstractClient)
    Q_DISABLE_COPY(AwsAbstractClientPrivate)
    friend class TestAwsAbstractClient;
};

} // namespace Core
} // namespace QtAws

#endif
