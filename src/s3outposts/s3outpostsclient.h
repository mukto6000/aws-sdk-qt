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

#ifndef QTAWS_S3OUTPOSTSCLIENT_H
#define QTAWS_S3OUTPOSTSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace S3Outposts {

class S3OutpostsClientPrivate;
class CreateEndpointRequest;
class CreateEndpointResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class ListEndpointsRequest;
class ListEndpointsResponse;

class QTAWS_EXPORT S3OutpostsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    S3OutpostsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    S3OutpostsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateEndpointResponse * createEndpoint(const CreateEndpointRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    ListEndpointsResponse * listEndpoints(const ListEndpointsRequest &request);

private:
    Q_DECLARE_PRIVATE(S3OutpostsClient)
    Q_DISABLE_COPY(S3OutpostsClient)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
