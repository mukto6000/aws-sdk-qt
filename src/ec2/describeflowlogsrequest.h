// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLOWLOGSREQUEST_H
#define QTAWS_DESCRIBEFLOWLOGSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFlowLogsRequestPrivate;

class QTAWSEC2_EXPORT DescribeFlowLogsRequest : public Ec2Request {

public:
    DescribeFlowLogsRequest(const DescribeFlowLogsRequest &other);
    DescribeFlowLogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFlowLogsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
