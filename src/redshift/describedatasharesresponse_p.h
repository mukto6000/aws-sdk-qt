// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASHARESRESPONSE_P_H
#define QTAWS_DESCRIBEDATASHARESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeDataSharesResponse;

class DescribeDataSharesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeDataSharesResponsePrivate(DescribeDataSharesResponse * const q);

    void parseDescribeDataSharesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDataSharesResponse)
    Q_DISABLE_COPY(DescribeDataSharesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
