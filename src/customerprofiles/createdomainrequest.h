// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINREQUEST_H
#define QTAWS_CREATEDOMAINREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateDomainRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT CreateDomainRequest : public CustomerProfilesRequest {

public:
    CreateDomainRequest(const CreateDomainRequest &other);
    CreateDomainRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
