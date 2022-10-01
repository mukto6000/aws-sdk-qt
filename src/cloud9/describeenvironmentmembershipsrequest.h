// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTMEMBERSHIPSREQUEST_H

#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentMembershipsRequestPrivate;

class QTAWSCLOUD9_EXPORT DescribeEnvironmentMembershipsRequest : public Cloud9Request {

public:
    DescribeEnvironmentMembershipsRequest(const DescribeEnvironmentMembershipsRequest &other);
    DescribeEnvironmentMembershipsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentMembershipsRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
