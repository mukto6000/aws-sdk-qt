// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREUSABLEDELEGATIONSETREQUEST_H
#define QTAWS_GETREUSABLEDELEGATIONSETREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetReusableDelegationSetRequestPrivate;

class QTAWSROUTE53_EXPORT GetReusableDelegationSetRequest : public Route53Request {

public:
    GetReusableDelegationSetRequest(const GetReusableDelegationSetRequest &other);
    GetReusableDelegationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReusableDelegationSetRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
