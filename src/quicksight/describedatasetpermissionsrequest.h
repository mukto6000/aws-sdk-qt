// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETPERMISSIONSREQUEST_H
#define QTAWS_DESCRIBEDATASETPERMISSIONSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeDataSetPermissionsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeDataSetPermissionsRequest : public QuickSightRequest {

public:
    DescribeDataSetPermissionsRequest(const DescribeDataSetPermissionsRequest &other);
    DescribeDataSetPermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataSetPermissionsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
