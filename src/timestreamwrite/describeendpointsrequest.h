// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTSREQUEST_H
#define QTAWS_DESCRIBEENDPOINTSREQUEST_H

#include "timestreamwriterequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DescribeEndpointsRequestPrivate;

class QTAWSTIMESTREAMWRITE_EXPORT DescribeEndpointsRequest : public TimestreamWriteRequest {

public:
    DescribeEndpointsRequest(const DescribeEndpointsRequest &other);
    DescribeEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointsRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
