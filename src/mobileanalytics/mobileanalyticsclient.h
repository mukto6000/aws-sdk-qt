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

#ifndef QTAWS_MOBILEANALYTICSCLIENT_H
#define QTAWS_MOBILEANALYTICSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmobileanalyticsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MobileAnalytics {

class MobileAnalyticsClientPrivate;
class PutEventsRequest;
class PutEventsResponse;

class QTAWSMOBILEANALYTICS_EXPORT MobileAnalyticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MobileAnalyticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MobileAnalyticsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    PutEventsResponse * putEvents(const PutEventsRequest &request);

protected:
    /// @cond internal
    MobileAnalyticsClientPrivate * const d_ptr; ///< Internal d-pointer.
    MobileAnalyticsClient(MobileAnalyticsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MobileAnalyticsClient)
    Q_DISABLE_COPY(MobileAnalyticsClient)

};

} // namespace MobileAnalytics
} // namespace QtAws

#endif
