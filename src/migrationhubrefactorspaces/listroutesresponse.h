// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTESRESPONSE_H
#define QTAWS_LISTROUTESRESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "listroutesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListRoutesResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT ListRoutesResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    ListRoutesResponse(const ListRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutesResponse)
    Q_DISABLE_COPY(ListRoutesResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
