// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKEXECUTIONREQUEST_H
#define QTAWS_DESCRIBETASKEXECUTIONREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeTaskExecutionRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeTaskExecutionRequest : public DataSyncRequest {

public:
    DescribeTaskExecutionRequest(const DescribeTaskExecutionRequest &other);
    DescribeTaskExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
