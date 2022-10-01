// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSUBSCRIPTIONSREQUEST_H
#define QTAWS_DESCRIBEEVENTSUBSCRIPTIONSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEventSubscriptionsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeEventSubscriptionsRequest : public RedshiftRequest {

public:
    DescribeEventSubscriptionsRequest(const DescribeEventSubscriptionsRequest &other);
    DescribeEventSubscriptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventSubscriptionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
