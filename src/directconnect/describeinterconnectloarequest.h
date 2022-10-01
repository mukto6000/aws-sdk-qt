// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTERCONNECTLOAREQUEST_H
#define QTAWS_DESCRIBEINTERCONNECTLOAREQUEST_H

#include "directconnectrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeInterconnectLoaRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DescribeInterconnectLoaRequest : public DirectConnectRequest {

public:
    DescribeInterconnectLoaRequest(const DescribeInterconnectLoaRequest &other);
    DescribeInterconnectLoaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInterconnectLoaRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
