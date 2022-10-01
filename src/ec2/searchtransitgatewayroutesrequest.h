// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTRANSITGATEWAYROUTESREQUEST_H
#define QTAWS_SEARCHTRANSITGATEWAYROUTESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class SearchTransitGatewayRoutesRequestPrivate;

class QTAWSEC2_EXPORT SearchTransitGatewayRoutesRequest : public Ec2Request {

public:
    SearchTransitGatewayRoutesRequest(const SearchTransitGatewayRoutesRequest &other);
    SearchTransitGatewayRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchTransitGatewayRoutesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
