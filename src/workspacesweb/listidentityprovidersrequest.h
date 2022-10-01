// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERSREQUEST_H
#define QTAWS_LISTIDENTITYPROVIDERSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListIdentityProvidersRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT ListIdentityProvidersRequest : public WorkSpacesWebRequest {

public:
    ListIdentityProvidersRequest(const ListIdentityProvidersRequest &other);
    ListIdentityProvidersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIdentityProvidersRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
