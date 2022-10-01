// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSESRESPONSE_H
#define QTAWS_DESCRIBEADDRESSESRESPONSE_H

#include "ec2response.h"
#include "describeaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeAddressesResponsePrivate;

class QTAWSEC2_EXPORT DescribeAddressesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeAddressesResponse(const DescribeAddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAddressesResponse)
    Q_DISABLE_COPY(DescribeAddressesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
