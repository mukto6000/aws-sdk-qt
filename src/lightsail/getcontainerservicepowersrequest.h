// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERSERVICEPOWERSREQUEST_H
#define QTAWS_GETCONTAINERSERVICEPOWERSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContainerServicePowersRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetContainerServicePowersRequest : public LightsailRequest {

public:
    GetContainerServicePowersRequest(const GetContainerServicePowersRequest &other);
    GetContainerServicePowersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerServicePowersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
