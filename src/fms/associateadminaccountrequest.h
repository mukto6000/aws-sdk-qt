// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEADMINACCOUNTREQUEST_H
#define QTAWS_ASSOCIATEADMINACCOUNTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class AssociateAdminAccountRequestPrivate;

class QTAWSFMS_EXPORT AssociateAdminAccountRequest : public FmsRequest {

public:
    AssociateAdminAccountRequest(const AssociateAdminAccountRequest &other);
    AssociateAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAdminAccountRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
