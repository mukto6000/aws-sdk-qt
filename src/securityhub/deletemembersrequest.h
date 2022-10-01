// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERSREQUEST_H
#define QTAWS_DELETEMEMBERSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeleteMembersRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DeleteMembersRequest : public SecurityHubRequest {

public:
    DeleteMembersRequest(const DeleteMembersRequest &other);
    DeleteMembersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
