// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVOLUMESRESPONSE_P_H
#define QTAWS_DESCRIBEVOLUMESRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DescribeVolumesResponse;

class DescribeVolumesResponsePrivate : public FSxResponsePrivate {

public:

    explicit DescribeVolumesResponsePrivate(DescribeVolumesResponse * const q);

    void parseDescribeVolumesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeVolumesResponse)
    Q_DISABLE_COPY(DescribeVolumesResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
