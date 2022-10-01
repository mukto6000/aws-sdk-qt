// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTACKINSTANCESRESPONSE_P_H
#define QTAWS_CREATESTACKINSTANCESRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class CreateStackInstancesResponse;

class CreateStackInstancesResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit CreateStackInstancesResponsePrivate(CreateStackInstancesResponse * const q);

    void parseCreateStackInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStackInstancesResponse)
    Q_DISABLE_COPY(CreateStackInstancesResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
