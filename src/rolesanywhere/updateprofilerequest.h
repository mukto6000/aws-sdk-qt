// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEREQUEST_H
#define QTAWS_UPDATEPROFILEREQUEST_H

#include "rolesanywhererequest.h"

namespace QtAws {
namespace RolesAnywhere {

class UpdateProfileRequestPrivate;

class QTAWSROLESANYWHERE_EXPORT UpdateProfileRequest : public RolesAnywhereRequest {

public:
    UpdateProfileRequest(const UpdateProfileRequest &other);
    UpdateProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProfileRequest)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
