// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERTRACKSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERTRACKSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterTracksResponse;

class DescribeClusterTracksResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterTracksResponsePrivate(DescribeClusterTracksResponse * const q);

    void parseDescribeClusterTracksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterTracksResponse)
    Q_DISABLE_COPY(DescribeClusterTracksResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
