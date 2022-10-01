// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRUNKINTERFACERESPONSE_P_H
#define QTAWS_ASSOCIATETRUNKINTERFACERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AssociateTrunkInterfaceResponse;

class AssociateTrunkInterfaceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AssociateTrunkInterfaceResponsePrivate(AssociateTrunkInterfaceResponse * const q);

    void parseAssociateTrunkInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateTrunkInterfaceResponse)
    Q_DISABLE_COPY(AssociateTrunkInterfaceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
