// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNMONITORINSTANCESRESPONSE_P_H
#define QTAWS_UNMONITORINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class UnmonitorInstancesResponse;

class UnmonitorInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit UnmonitorInstancesResponsePrivate(UnmonitorInstancesResponse * const q);

    void parseUnmonitorInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnmonitorInstancesResponse)
    Q_DISABLE_COPY(UnmonitorInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
