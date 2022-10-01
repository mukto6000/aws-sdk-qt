// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2RESPONSE_P_H
#define QTAWS_EC2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ec2 {

class Ec2Response;

class Ec2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Ec2ResponsePrivate(Ec2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Ec2Response)
    Q_DISABLE_COPY(Ec2ResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
