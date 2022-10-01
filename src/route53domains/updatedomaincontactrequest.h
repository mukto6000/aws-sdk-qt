// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINCONTACTREQUEST_H
#define QTAWS_UPDATEDOMAINCONTACTREQUEST_H

#include "route53domainsrequest.h"

namespace QtAws {
namespace Route53Domains {

class UpdateDomainContactRequestPrivate;

class QTAWSROUTE53DOMAINS_EXPORT UpdateDomainContactRequest : public Route53DomainsRequest {

public:
    UpdateDomainContactRequest(const UpdateDomainContactRequest &other);
    UpdateDomainContactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainContactRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
