// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPROVIDERREQUEST_H
#define QTAWS_CREATEIDENTITYPROVIDERREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateIdentityProviderRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateIdentityProviderRequest : public WorkSpacesWebRequest {

public:
    CreateIdentityProviderRequest(const CreateIdentityProviderRequest &other);
    CreateIdentityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIdentityProviderRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
