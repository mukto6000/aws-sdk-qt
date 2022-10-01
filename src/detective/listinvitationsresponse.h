// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVITATIONSRESPONSE_H
#define QTAWS_LISTINVITATIONSRESPONSE_H

#include "detectiveresponse.h"
#include "listinvitationsrequest.h"

namespace QtAws {
namespace Detective {

class ListInvitationsResponsePrivate;

class QTAWSDETECTIVE_EXPORT ListInvitationsResponse : public DetectiveResponse {
    Q_OBJECT

public:
    ListInvitationsResponse(const ListInvitationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInvitationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInvitationsResponse)
    Q_DISABLE_COPY(ListInvitationsResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
