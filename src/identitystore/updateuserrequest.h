// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERREQUEST_H
#define QTAWS_UPDATEUSERREQUEST_H

#include "identitystorerequest.h"

namespace QtAws {
namespace IdentityStore {

class UpdateUserRequestPrivate;

class QTAWSIDENTITYSTORE_EXPORT UpdateUserRequest : public IdentityStoreRequest {

public:
    UpdateUserRequest(const UpdateUserRequest &other);
    UpdateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
