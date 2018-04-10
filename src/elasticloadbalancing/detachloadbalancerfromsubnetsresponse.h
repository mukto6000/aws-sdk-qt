/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DETACHLOADBALANCERFROMSUBNETSRESPONSE_H
#define QTAWS_DETACHLOADBALANCERFROMSUBNETSRESPONSE_H

#include "elasticloadbalancingresponse.h"
#include "detachloadbalancerfromsubnetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DetachLoadBalancerFromSubnetsResponsePrivate;

class QTAWS_EXPORT DetachLoadBalancerFromSubnetsResponse : public ElasticLoadBalancingResponse {
    Q_OBJECT

public:
    DetachLoadBalancerFromSubnetsResponse(const DetachLoadBalancerFromSubnetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachLoadBalancerFromSubnetsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DetachLoadBalancerFromSubnetsResponse)
    Q_DISABLE_COPY(DetachLoadBalancerFromSubnetsResponse)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif