// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDOMAINAVAILABILITYREQUEST_P_H
#define QTAWS_CHECKDOMAINAVAILABILITYREQUEST_P_H

#include "route53domainsrequest_p.h"
#include "checkdomainavailabilityrequest.h"

namespace QtAws {
namespace Route53Domains {

class CheckDomainAvailabilityRequest;

class CheckDomainAvailabilityRequestPrivate : public Route53DomainsRequestPrivate {

public:
    CheckDomainAvailabilityRequestPrivate(const Route53DomainsRequest::Action action,
                                   CheckDomainAvailabilityRequest * const q);
    CheckDomainAvailabilityRequestPrivate(const CheckDomainAvailabilityRequestPrivate &other,
                                   CheckDomainAvailabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckDomainAvailabilityRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
