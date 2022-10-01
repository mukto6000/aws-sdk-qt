// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDRESERVEDINSTANCESRESPONSE_P_H
#define QTAWS_DELETEQUEUEDRESERVEDINSTANCESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteQueuedReservedInstancesResponse;

class DeleteQueuedReservedInstancesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteQueuedReservedInstancesResponsePrivate(DeleteQueuedReservedInstancesResponse * const q);

    void parseDeleteQueuedReservedInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQueuedReservedInstancesResponse)
    Q_DISABLE_COPY(DeleteQueuedReservedInstancesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
