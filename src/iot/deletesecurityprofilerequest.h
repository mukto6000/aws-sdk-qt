// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYPROFILEREQUEST_H
#define QTAWS_DELETESECURITYPROFILEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteSecurityProfileRequestPrivate;

class QTAWSIOT_EXPORT DeleteSecurityProfileRequest : public IoTRequest {

public:
    DeleteSecurityProfileRequest(const DeleteSecurityProfileRequest &other);
    DeleteSecurityProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
