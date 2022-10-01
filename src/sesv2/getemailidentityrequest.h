// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYREQUEST_H
#define QTAWS_GETEMAILIDENTITYREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetEmailIdentityRequestPrivate;

class QTAWSSESV2_EXPORT GetEmailIdentityRequest : public SESv2Request {

public:
    GetEmailIdentityRequest(const GetEmailIdentityRequest &other);
    GetEmailIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailIdentityRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
