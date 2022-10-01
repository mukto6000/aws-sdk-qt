// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEPASSWORDREQUEST_H
#define QTAWS_CHANGEPASSWORDREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ChangePasswordRequestPrivate;

class QTAWSIAM_EXPORT ChangePasswordRequest : public IamRequest {

public:
    ChangePasswordRequest(const ChangePasswordRequest &other);
    ChangePasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChangePasswordRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
