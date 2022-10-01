// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVITATIONSREQUEST_H
#define QTAWS_LISTINVITATIONSREQUEST_H

#include "macie2request.h"

namespace QtAws {
namespace Macie2 {

class ListInvitationsRequestPrivate;

class QTAWSMACIE2_EXPORT ListInvitationsRequest : public Macie2Request {

public:
    ListInvitationsRequest(const ListInvitationsRequest &other);
    ListInvitationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInvitationsRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
