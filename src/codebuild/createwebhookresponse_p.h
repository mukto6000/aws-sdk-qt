// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWEBHOOKRESPONSE_P_H
#define QTAWS_CREATEWEBHOOKRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class CreateWebhookResponse;

class CreateWebhookResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit CreateWebhookResponsePrivate(CreateWebhookResponse * const q);

    void parseCreateWebhookResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateWebhookResponse)
    Q_DISABLE_COPY(CreateWebhookResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
