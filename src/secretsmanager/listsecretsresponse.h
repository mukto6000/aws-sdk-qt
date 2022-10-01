// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECRETSRESPONSE_H
#define QTAWS_LISTSECRETSRESPONSE_H

#include "secretsmanagerresponse.h"
#include "listsecretsrequest.h"

namespace QtAws {
namespace SecretsManager {

class ListSecretsResponsePrivate;

class QTAWSSECRETSMANAGER_EXPORT ListSecretsResponse : public SecretsManagerResponse {
    Q_OBJECT

public:
    ListSecretsResponse(const ListSecretsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSecretsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecretsResponse)
    Q_DISABLE_COPY(ListSecretsResponse)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
