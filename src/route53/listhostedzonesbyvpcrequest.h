// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYVPCREQUEST_H
#define QTAWS_LISTHOSTEDZONESBYVPCREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByVPCRequestPrivate;

class QTAWSROUTE53_EXPORT ListHostedZonesByVPCRequest : public Route53Request {

public:
    ListHostedZonesByVPCRequest(const ListHostedZonesByVPCRequest &other);
    ListHostedZonesByVPCRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostedZonesByVPCRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
