// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONINPUTRESPONSE_P_H
#define QTAWS_ADDAPPLICATIONINPUTRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class AddApplicationInputResponse;

class AddApplicationInputResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit AddApplicationInputResponsePrivate(AddApplicationInputResponse * const q);

    void parseAddApplicationInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddApplicationInputResponse)
    Q_DISABLE_COPY(AddApplicationInputResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
