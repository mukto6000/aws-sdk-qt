// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCESRESPONSE_P_H
#define QTAWS_REBOOTINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RebootInstancesResponse;

class RebootInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RebootInstancesResponsePrivate(RebootInstancesResponse * const q);

    void parseRebootInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootInstancesResponse)
    Q_DISABLE_COPY(RebootInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
