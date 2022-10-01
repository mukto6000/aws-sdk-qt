// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLACEMENTGROUPSRESPONSE_H
#define QTAWS_DESCRIBEPLACEMENTGROUPSRESPONSE_H

#include "ec2response.h"
#include "describeplacementgroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribePlacementGroupsResponsePrivate;

class QTAWSEC2_EXPORT DescribePlacementGroupsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribePlacementGroupsResponse(const DescribePlacementGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribePlacementGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlacementGroupsResponse)
    Q_DISABLE_COPY(DescribePlacementGroupsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
