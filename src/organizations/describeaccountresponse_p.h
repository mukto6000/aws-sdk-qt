// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class DescribeAccountResponse;

class DescribeAccountResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit DescribeAccountResponsePrivate(DescribeAccountResponse * const q);

    void parseDescribeAccountResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountResponse)
    Q_DISABLE_COPY(DescribeAccountResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
