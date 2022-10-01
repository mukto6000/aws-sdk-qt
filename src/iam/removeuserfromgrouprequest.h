// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEUSERFROMGROUPREQUEST_H
#define QTAWS_REMOVEUSERFROMGROUPREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class RemoveUserFromGroupRequestPrivate;

class QTAWSIAM_EXPORT RemoveUserFromGroupRequest : public IamRequest {

public:
    RemoveUserFromGroupRequest(const RemoveUserFromGroupRequest &other);
    RemoveUserFromGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveUserFromGroupRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
