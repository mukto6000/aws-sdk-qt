// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENVIRONMENTRESPONSE_H
#define QTAWS_GETENVIRONMENTRESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "getenvironmentrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetEnvironmentResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT GetEnvironmentResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    GetEnvironmentResponse(const GetEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEnvironmentResponse)
    Q_DISABLE_COPY(GetEnvironmentResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
