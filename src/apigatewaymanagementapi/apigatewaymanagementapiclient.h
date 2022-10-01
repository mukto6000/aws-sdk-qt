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

#ifndef QTAWS_APIGATEWAYMANAGEMENTCLIENT_H
#define QTAWS_APIGATEWAYMANAGEMENTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsapigatewaymanagementglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ApiGatewayManagement {

class ApiGatewayManagementClientPrivate;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class GetConnectionRequest;
class GetConnectionResponse;
class PostToConnectionRequest;
class PostToConnectionResponse;

class QTAWSAPIGATEWAYMANAGEMENT_EXPORT ApiGatewayManagementClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ApiGatewayManagementClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ApiGatewayManagementClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    GetConnectionResponse * getConnection(const GetConnectionRequest &request);
    PostToConnectionResponse * postToConnection(const PostToConnectionRequest &request);

private:
    Q_DECLARE_PRIVATE(ApiGatewayManagementClient)
    Q_DISABLE_COPY(ApiGatewayManagementClient)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
