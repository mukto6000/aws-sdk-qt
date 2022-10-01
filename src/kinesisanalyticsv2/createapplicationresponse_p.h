// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONRESPONSE_P_H
#define QTAWS_CREATEAPPLICATIONRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class CreateApplicationResponse;

class CreateApplicationResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit CreateApplicationResponsePrivate(CreateApplicationResponse * const q);

    void parseCreateApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApplicationResponse)
    Q_DISABLE_COPY(CreateApplicationResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
