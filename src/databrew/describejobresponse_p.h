// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRESPONSE_P_H
#define QTAWS_DESCRIBEJOBRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class DescribeJobResponse;

class DescribeJobResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit DescribeJobResponsePrivate(DescribeJobResponse * const q);

    void parseDescribeJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobResponse)
    Q_DISABLE_COPY(DescribeJobResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
