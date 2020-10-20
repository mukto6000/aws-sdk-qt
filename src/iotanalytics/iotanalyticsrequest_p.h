/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_IOTANALYTICSREQUEST_P_H
#define QTAWS_IOTANALYTICSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class IoTAnalyticsRequest;

class QTAWS_EXPORT IoTAnalyticsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IoTAnalyticsRequest::Action action; ///< IoTAnalytics action to be performed.
    QString apiVersion;        ///< IoTAnalytics API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IoTAnalytics request (query string) parameters. @todo?

    IoTAnalyticsRequestPrivate(const IoTAnalyticsRequest::Action action, IoTAnalyticsRequest * const q);
    IoTAnalyticsRequestPrivate(const IoTAnalyticsRequestPrivate &other, IoTAnalyticsRequest * const q);

    static QString toString(const IoTAnalyticsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IoTAnalyticsRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
