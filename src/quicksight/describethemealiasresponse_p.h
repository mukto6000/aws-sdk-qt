// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEALIASRESPONSE_P_H
#define QTAWS_DESCRIBETHEMEALIASRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemeAliasResponse;

class DescribeThemeAliasResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeThemeAliasResponsePrivate(DescribeThemeAliasResponse * const q);

    void parseDescribeThemeAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeThemeAliasResponse)
    Q_DISABLE_COPY(DescribeThemeAliasResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
