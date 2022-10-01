// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPEREQUEST_H
#define QTAWS_GETPROFILEOBJECTTYPEREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetProfileObjectTypeRequest : public CustomerProfilesRequest {

public:
    GetProfileObjectTypeRequest(const GetProfileObjectTypeRequest &other);
    GetProfileObjectTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProfileObjectTypeRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
