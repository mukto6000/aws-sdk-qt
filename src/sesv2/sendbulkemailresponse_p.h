// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBULKEMAILRESPONSE_P_H
#define QTAWS_SENDBULKEMAILRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class SendBulkEmailResponse;

class SendBulkEmailResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit SendBulkEmailResponsePrivate(SendBulkEmailResponse * const q);

    void parseSendBulkEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendBulkEmailResponse)
    Q_DISABLE_COPY(SendBulkEmailResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
