// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSTUDIOMEMBERSREQUEST_H
#define QTAWS_PUTSTUDIOMEMBERSREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class PutStudioMembersRequestPrivate;

class QTAWSNIMBLE_EXPORT PutStudioMembersRequest : public NimbleRequest {

public:
    PutStudioMembersRequest(const PutStudioMembersRequest &other);
    PutStudioMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutStudioMembersRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
