// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPGRADEHISTORYRESPONSE_H
#define QTAWS_GETUPGRADEHISTORYRESPONSE_H

#include "elasticsearchresponse.h"
#include "getupgradehistoryrequest.h"

namespace QtAws {
namespace Elasticsearch {

class GetUpgradeHistoryResponsePrivate;

class QTAWSELASTICSEARCH_EXPORT GetUpgradeHistoryResponse : public ElasticsearchResponse {
    Q_OBJECT

public:
    GetUpgradeHistoryResponse(const GetUpgradeHistoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUpgradeHistoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUpgradeHistoryResponse)
    Q_DISABLE_COPY(GetUpgradeHistoryResponse)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
