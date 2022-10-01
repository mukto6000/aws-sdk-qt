// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTRESPONSE_P_H
#define QTAWS_DESCRIBEPROJECTRESPONSE_P_H

#include "codestarresponse_p.h"

namespace QtAws {
namespace CodeStar {

class DescribeProjectResponse;

class DescribeProjectResponsePrivate : public CodeStarResponsePrivate {

public:

    explicit DescribeProjectResponsePrivate(DescribeProjectResponse * const q);

    void parseDescribeProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProjectResponse)
    Q_DISABLE_COPY(DescribeProjectResponsePrivate)

};

} // namespace CodeStar
} // namespace QtAws

#endif
