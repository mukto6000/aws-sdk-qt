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

#ifndef QTAWS_HEALTHCLIENT_H
#define QTAWS_HEALTHCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Health {

class HealthClientPrivate;
class DescribeAffectedEntitiesRequest;
class DescribeAffectedEntitiesResponse;
class DescribeEntityAggregatesRequest;
class DescribeEntityAggregatesResponse;
class DescribeEventAggregatesRequest;
class DescribeEventAggregatesResponse;
class DescribeEventDetailsRequest;
class DescribeEventDetailsResponse;
class DescribeEventTypesRequest;
class DescribeEventTypesResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;

class QTAWS_EXPORT HealthClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    HealthClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    HealthClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeAffectedEntitiesResponse * describeAffectedEntities(const DescribeAffectedEntitiesRequest &request);
    DescribeEntityAggregatesResponse * describeEntityAggregates(const DescribeEntityAggregatesRequest &request);
    DescribeEventAggregatesResponse * describeEventAggregates(const DescribeEventAggregatesRequest &request);
    DescribeEventDetailsResponse * describeEventDetails(const DescribeEventDetailsRequest &request);
    DescribeEventTypesResponse * describeEventTypes(const DescribeEventTypesRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);

private:
    Q_DECLARE_PRIVATE(HealthClient)
    Q_DISABLE_COPY(HealthClient)

};

} // namespace Health
} // namespace QtAws

#endif
