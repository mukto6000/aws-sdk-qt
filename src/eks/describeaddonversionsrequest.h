// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONVERSIONSREQUEST_H
#define QTAWS_DESCRIBEADDONVERSIONSREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DescribeAddonVersionsRequestPrivate;

class QTAWSEKS_EXPORT DescribeAddonVersionsRequest : public EksRequest {

public:
    DescribeAddonVersionsRequest(const DescribeAddonVersionsRequest &other);
    DescribeAddonVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddonVersionsRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
