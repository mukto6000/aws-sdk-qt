// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSUPPRESSIONOPTIONSRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONSETSUPPRESSIONOPTIONSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetSuppressionOptionsResponse;

class PutConfigurationSetSuppressionOptionsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutConfigurationSetSuppressionOptionsResponsePrivate(PutConfigurationSetSuppressionOptionsResponse * const q);

    void parsePutConfigurationSetSuppressionOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetSuppressionOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetSuppressionOptionsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
