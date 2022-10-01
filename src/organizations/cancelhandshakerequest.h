// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELHANDSHAKEREQUEST_H
#define QTAWS_CANCELHANDSHAKEREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class CancelHandshakeRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT CancelHandshakeRequest : public OrganizationsRequest {

public:
    CancelHandshakeRequest(const CancelHandshakeRequest &other);
    CancelHandshakeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelHandshakeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
