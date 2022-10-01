// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSREQUEST_H
#define QTAWS_DESCRIBEIMAGEREPLICATIONSTATUSREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeImageReplicationStatusRequestPrivate;

class QTAWSECR_EXPORT DescribeImageReplicationStatusRequest : public EcrRequest {

public:
    DescribeImageReplicationStatusRequest(const DescribeImageReplicationStatusRequest &other);
    DescribeImageReplicationStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageReplicationStatusRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
