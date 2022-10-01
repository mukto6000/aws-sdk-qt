// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSRESPONSE_H
#define QTAWS_LISTAPPSRESPONSE_H

#include "resiliencehubresponse.h"
#include "listappsrequest.h"

namespace QtAws {
namespace ResilienceHub {

class ListAppsResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT ListAppsResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    ListAppsResponse(const ListAppsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAppsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppsResponse)
    Q_DISABLE_COPY(ListAppsResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
