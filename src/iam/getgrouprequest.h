// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPREQUEST_H
#define QTAWS_GETGROUPREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetGroupRequestPrivate;

class QTAWSIAM_EXPORT GetGroupRequest : public IamRequest {

public:
    GetGroupRequest(const GetGroupRequest &other);
    GetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
