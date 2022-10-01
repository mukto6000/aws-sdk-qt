// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONREQUEST_H
#define QTAWS_DESCRIBEMULTIREGIONACCESSPOINTOPERATIONREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DescribeMultiRegionAccessPointOperationRequestPrivate;

class QTAWSS3CONTROL_EXPORT DescribeMultiRegionAccessPointOperationRequest : public S3ControlRequest {

public:
    DescribeMultiRegionAccessPointOperationRequest(const DescribeMultiRegionAccessPointOperationRequest &other);
    DescribeMultiRegionAccessPointOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMultiRegionAccessPointOperationRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
