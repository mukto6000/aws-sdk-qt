// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSREQUEST_H
#define QTAWS_DESCRIBERESERVEDINSTANCESLISTINGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeReservedInstancesListingsRequestPrivate;

class QTAWSEC2_EXPORT DescribeReservedInstancesListingsRequest : public Ec2Request {

public:
    DescribeReservedInstancesListingsRequest(const DescribeReservedInstancesListingsRequest &other);
    DescribeReservedInstancesListingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReservedInstancesListingsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
