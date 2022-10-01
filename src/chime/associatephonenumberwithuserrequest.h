// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERWITHUSERREQUEST_H
#define QTAWS_ASSOCIATEPHONENUMBERWITHUSERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumberWithUserRequestPrivate;

class QTAWSCHIME_EXPORT AssociatePhoneNumberWithUserRequest : public ChimeRequest {

public:
    AssociatePhoneNumberWithUserRequest(const AssociatePhoneNumberWithUserRequest &other);
    AssociatePhoneNumberWithUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePhoneNumberWithUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
