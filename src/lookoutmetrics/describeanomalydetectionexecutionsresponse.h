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

#ifndef QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSRESPONSE_H
#define QTAWS_DESCRIBEANOMALYDETECTIONEXECUTIONSRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "describeanomalydetectionexecutionsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DescribeAnomalyDetectionExecutionsResponsePrivate;

class QTAWS_EXPORT DescribeAnomalyDetectionExecutionsResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DescribeAnomalyDetectionExecutionsResponse(const DescribeAnomalyDetectionExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAnomalyDetectionExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAnomalyDetectionExecutionsResponse)
    Q_DISABLE_COPY(DescribeAnomalyDetectionExecutionsResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
