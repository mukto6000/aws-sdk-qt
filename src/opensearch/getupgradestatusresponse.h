// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADESTATUSRESPONSE_H
#define QTAWS_GETUPGRADESTATUSRESPONSE_H

#include "opensearchresponse.h"
#include "getupgradestatusrequest.h"

namespace QtAws {
namespace OpenSearch {

class GetUpgradeStatusResponsePrivate;

class QTAWSOPENSEARCH_EXPORT GetUpgradeStatusResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    GetUpgradeStatusResponse(const GetUpgradeStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUpgradeStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUpgradeStatusResponse)
    Q_DISABLE_COPY(GetUpgradeStatusResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
