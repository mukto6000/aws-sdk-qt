// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBEHSMCONFIGURATIONSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmConfigurationsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeHsmConfigurationsRequest : public RedshiftRequest {

public:
    DescribeHsmConfigurationsRequest(const DescribeHsmConfigurationsRequest &other);
    DescribeHsmConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHsmConfigurationsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
