// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEADMINSRESPONSE_H
#define QTAWS_LISTAPPINSTANCEADMINSRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "listappinstanceadminsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceAdminsResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ListAppInstanceAdminsResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    ListAppInstanceAdminsResponse(const ListAppInstanceAdminsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppInstanceAdminsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceAdminsResponse)
    Q_DISABLE_COPY(ListAppInstanceAdminsResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
