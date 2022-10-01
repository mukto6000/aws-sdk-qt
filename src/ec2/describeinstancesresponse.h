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

#ifndef QTAWS_DESCRIBEINSTANCESRESPONSE_H
#define QTAWS_DESCRIBEINSTANCESRESPONSE_H

#include "ec2response.h"
#include "describeinstancesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstancesResponsePrivate;

class QTAWSEC2_EXPORT DescribeInstancesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeInstancesResponse(const DescribeInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstancesResponse)
    Q_DISABLE_COPY(DescribeInstancesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
