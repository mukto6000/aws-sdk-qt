// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERREQUEST_H
#define QTAWS_GETUSERREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class GetUserRequestPrivate;

class QTAWSIAM_EXPORT GetUserRequest : public IamRequest {

public:
    GetUserRequest(const GetUserRequest &other);
    GetUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
