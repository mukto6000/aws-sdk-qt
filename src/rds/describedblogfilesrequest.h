// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBLOGFILESREQUEST_H
#define QTAWS_DESCRIBEDBLOGFILESREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBLogFilesRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBLogFilesRequest : public RdsRequest {

public:
    DescribeDBLogFilesRequest(const DescribeDBLogFilesRequest &other);
    DescribeDBLogFilesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBLogFilesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
