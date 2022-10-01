// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTAINERINSTANCESRESPONSE_H
#define QTAWS_DESCRIBECONTAINERINSTANCESRESPONSE_H

#include "ecsresponse.h"
#include "describecontainerinstancesrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeContainerInstancesResponsePrivate;

class QTAWSECS_EXPORT DescribeContainerInstancesResponse : public EcsResponse {
    Q_OBJECT

public:
    DescribeContainerInstancesResponse(const DescribeContainerInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContainerInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContainerInstancesResponse)
    Q_DISABLE_COPY(DescribeContainerInstancesResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
