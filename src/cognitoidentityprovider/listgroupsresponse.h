// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPSRESPONSE_H
#define QTAWS_LISTGROUPSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "listgroupsrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListGroupsResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ListGroupsResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ListGroupsResponse(const ListGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupsResponse)
    Q_DISABLE_COPY(ListGroupsResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
