// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETUSERPASSWORDREQUEST_H
#define QTAWS_RESETUSERPASSWORDREQUEST_H

#include "directoryservicerequest.h"

namespace QtAws {
namespace DirectoryService {

class ResetUserPasswordRequestPrivate;

class QTAWSDIRECTORYSERVICE_EXPORT ResetUserPasswordRequest : public DirectoryServiceRequest {

public:
    ResetUserPasswordRequest(const ResetUserPasswordRequest &other);
    ResetUserPasswordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResetUserPasswordRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
