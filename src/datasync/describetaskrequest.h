// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKREQUEST_H
#define QTAWS_DESCRIBETASKREQUEST_H

#include "datasyncrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeTaskRequestPrivate;

class QTAWSDATASYNC_EXPORT DescribeTaskRequest : public DataSyncRequest {

public:
    DescribeTaskRequest(const DescribeTaskRequest &other);
    DescribeTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTaskRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
