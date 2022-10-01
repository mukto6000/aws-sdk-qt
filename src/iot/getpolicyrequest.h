// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOLICYREQUEST_H
#define QTAWS_GETPOLICYREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetPolicyRequestPrivate;

class QTAWSIOT_EXPORT GetPolicyRequest : public IoTRequest {

public:
    GetPolicyRequest(const GetPolicyRequest &other);
    GetPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPolicyRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
