// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTREQUEST_H
#define QTAWS_DESCRIBECOMPONENTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class DescribeComponentRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT DescribeComponentRequest : public GreengrassV2Request {

public:
    DescribeComponentRequest(const DescribeComponentRequest &other);
    DescribeComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComponentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
