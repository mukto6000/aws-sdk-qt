// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERMAILDOMAINREQUEST_H
#define QTAWS_DEREGISTERMAILDOMAINREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeregisterMailDomainRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeregisterMailDomainRequest : public WorkMailRequest {

public:
    DeregisterMailDomainRequest(const DeregisterMailDomainRequest &other);
    DeregisterMailDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterMailDomainRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
