// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINASSOCIATIONREQUEST_H
#define QTAWS_UPDATEDOMAINASSOCIATIONREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class UpdateDomainAssociationRequestPrivate;

class QTAWSAMPLIFY_EXPORT UpdateDomainAssociationRequest : public AmplifyRequest {

public:
    UpdateDomainAssociationRequest(const UpdateDomainAssociationRequest &other);
    UpdateDomainAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDomainAssociationRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
