// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILIDENTITYPOLICIESREQUEST_H
#define QTAWS_GETEMAILIDENTITYPOLICIESREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class GetEmailIdentityPoliciesRequestPrivate;

class QTAWSSESV2_EXPORT GetEmailIdentityPoliciesRequest : public SESv2Request {

public:
    GetEmailIdentityPoliciesRequest(const GetEmailIdentityPoliciesRequest &other);
    GetEmailIdentityPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEmailIdentityPoliciesRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
