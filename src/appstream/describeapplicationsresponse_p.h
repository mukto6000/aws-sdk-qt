// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEAPPLICATIONSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DescribeApplicationsResponse;

class DescribeApplicationsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DescribeApplicationsResponsePrivate(DescribeApplicationsResponse * const q);

    void parseDescribeApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationsResponse)
    Q_DISABLE_COPY(DescribeApplicationsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
