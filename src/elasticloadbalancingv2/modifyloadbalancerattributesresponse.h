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

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_H

#include "elasticloadbalancingv2response.h"
#include "modifyloadbalancerattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyLoadBalancerAttributesResponsePrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ModifyLoadBalancerAttributesResponse : public ElasticLoadBalancingv2Response {
    Q_OBJECT

public:
    ModifyLoadBalancerAttributesResponse(const ModifyLoadBalancerAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyLoadBalancerAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyLoadBalancerAttributesResponse)
    Q_DISABLE_COPY(ModifyLoadBalancerAttributesResponse)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
