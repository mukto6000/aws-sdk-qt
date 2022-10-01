// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWEBHOOKRESPONSE_P_H
#define QTAWS_DELETEWEBHOOKRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class DeleteWebhookResponse;

class DeleteWebhookResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit DeleteWebhookResponsePrivate(DeleteWebhookResponse * const q);

    void parseDeleteWebhookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWebhookResponse)
    Q_DISABLE_COPY(DeleteWebhookResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
