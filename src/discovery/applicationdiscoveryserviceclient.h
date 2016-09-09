/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H
#define QTAWS_APPLICATIONDISCOVERYSERVICECLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class ApplicationDiscoveryServiceClientPrivate;

class QTAWS_EXPORT ApplicationDiscoveryServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ApplicationDiscoveryServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ApplicationDiscoveryServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ApplicationDiscoveryServiceCreateTagsResponse * createTags(const ApplicationDiscoveryServiceCreateTagsRequest &request);
    ApplicationDiscoveryServiceDeleteTagsResponse * deleteTags(const ApplicationDiscoveryServiceDeleteTagsRequest &request);
    ApplicationDiscoveryServiceDescribeAgentsResponse * describeAgents(const ApplicationDiscoveryServiceDescribeAgentsRequest &request);
    ApplicationDiscoveryServiceDescribeConfigurationsResponse * describeConfigurations(const ApplicationDiscoveryServiceDescribeConfigurationsRequest &request);
    ApplicationDiscoveryServiceDescribeExportConfigurationsResponse * describeExportConfigurations(const ApplicationDiscoveryServiceDescribeExportConfigurationsRequest &request);
    ApplicationDiscoveryServiceDescribeTagsResponse * describeTags(const ApplicationDiscoveryServiceDescribeTagsRequest &request);
    ApplicationDiscoveryServiceExportConfigurationsResponse * exportConfigurations();
    ApplicationDiscoveryServiceListConfigurationsResponse * listConfigurations(const ApplicationDiscoveryServiceListConfigurationsRequest &request);
    ApplicationDiscoveryServiceStartDataCollectionByAgentIdsResponse * startDataCollectionByAgentIds(const ApplicationDiscoveryServiceStartDataCollectionByAgentIdsRequest &request);
    ApplicationDiscoveryServiceStopDataCollectionByAgentIdsResponse * stopDataCollectionByAgentIds(const ApplicationDiscoveryServiceStopDataCollectionByAgentIdsRequest &request);

private:
    Q_DECLARE_PRIVATE(ApplicationDiscoveryServiceClient)
    Q_DISABLE_COPY(ApplicationDiscoveryServiceClient)

};

QTAWS_END_NAMESPACE

#endif
