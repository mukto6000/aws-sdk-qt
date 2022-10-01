// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISRESPONSE_P_H
#define QTAWS_KINESISRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Kinesis {

class KinesisResponse;

class KinesisResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit KinesisResponsePrivate(KinesisResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(KinesisResponse)
    Q_DISABLE_COPY(KinesisResponsePrivate)

};

} // namespace Kinesis
} // namespace QtAws

#endif
