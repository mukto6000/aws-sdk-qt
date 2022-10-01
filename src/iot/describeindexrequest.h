// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINDEXREQUEST_H
#define QTAWS_DESCRIBEINDEXREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeIndexRequestPrivate;

class QTAWSIOT_EXPORT DescribeIndexRequest : public IoTRequest {

public:
    DescribeIndexRequest(const DescribeIndexRequest &other);
    DescribeIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIndexRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
