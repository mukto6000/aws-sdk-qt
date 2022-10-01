// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLUSTERCAPACITYPROVIDERSREQUEST_H
#define QTAWS_PUTCLUSTERCAPACITYPROVIDERSREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class PutClusterCapacityProvidersRequestPrivate;

class QTAWSECS_EXPORT PutClusterCapacityProvidersRequest : public EcsRequest {

public:
    PutClusterCapacityProvidersRequest(const PutClusterCapacityProvidersRequest &other);
    PutClusterCapacityProvidersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutClusterCapacityProvidersRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
