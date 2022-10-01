// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTEDZONESBYNAMEREQUEST_H
#define QTAWS_LISTHOSTEDZONESBYNAMEREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListHostedZonesByNameRequestPrivate;

class QTAWSROUTE53_EXPORT ListHostedZonesByNameRequest : public Route53Request {

public:
    ListHostedZonesByNameRequest(const ListHostedZonesByNameRequest &other);
    ListHostedZonesByNameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostedZonesByNameRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
