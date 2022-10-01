// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSREQUEST_H
#define QTAWS_DESCRIBESTACKSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStacksRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeStacksRequest : public OpsWorksRequest {

public:
    DescribeStacksRequest(const DescribeStacksRequest &other);
    DescribeStacksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStacksRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
