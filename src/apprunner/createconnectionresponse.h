// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONRESPONSE_H
#define QTAWS_CREATECONNECTIONRESPONSE_H

#include "apprunnerresponse.h"
#include "createconnectionrequest.h"

namespace QtAws {
namespace AppRunner {

class CreateConnectionResponsePrivate;

class QTAWSAPPRUNNER_EXPORT CreateConnectionResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    CreateConnectionResponse(const CreateConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectionResponse)
    Q_DISABLE_COPY(CreateConnectionResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
