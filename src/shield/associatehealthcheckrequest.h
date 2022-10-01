// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEHEALTHCHECKREQUEST_H
#define QTAWS_ASSOCIATEHEALTHCHECKREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class AssociateHealthCheckRequestPrivate;

class QTAWSSHIELD_EXPORT AssociateHealthCheckRequest : public ShieldRequest {

public:
    AssociateHealthCheckRequest(const AssociateHealthCheckRequest &other);
    AssociateHealthCheckRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateHealthCheckRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
