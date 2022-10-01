// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEFFECTIVEPOLICIESREQUEST_H
#define QTAWS_GETEFFECTIVEPOLICIESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetEffectivePoliciesRequestPrivate;

class QTAWSIOT_EXPORT GetEffectivePoliciesRequest : public IoTRequest {

public:
    GetEffectivePoliciesRequest(const GetEffectivePoliciesRequest &other);
    GetEffectivePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEffectivePoliciesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
