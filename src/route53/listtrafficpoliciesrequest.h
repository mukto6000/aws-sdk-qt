// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRAFFICPOLICIESREQUEST_H
#define QTAWS_LISTTRAFFICPOLICIESREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListTrafficPoliciesRequestPrivate;

class QTAWSROUTE53_EXPORT ListTrafficPoliciesRequest : public Route53Request {

public:
    ListTrafficPoliciesRequest(const ListTrafficPoliciesRequest &other);
    ListTrafficPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrafficPoliciesRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
