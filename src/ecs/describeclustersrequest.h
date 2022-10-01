// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSREQUEST_H
#define QTAWS_DESCRIBECLUSTERSREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeClustersRequestPrivate;

class QTAWSECS_EXPORT DescribeClustersRequest : public EcsRequest {

public:
    DescribeClustersRequest(const DescribeClustersRequest &other);
    DescribeClustersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClustersRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
