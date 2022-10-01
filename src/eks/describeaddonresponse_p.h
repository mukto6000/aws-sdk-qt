// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDONRESPONSE_P_H
#define QTAWS_DESCRIBEADDONRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class DescribeAddonResponse;

class DescribeAddonResponsePrivate : public EksResponsePrivate {

public:

    explicit DescribeAddonResponsePrivate(DescribeAddonResponse * const q);

    void parseDescribeAddonResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAddonResponse)
    Q_DISABLE_COPY(DescribeAddonResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
