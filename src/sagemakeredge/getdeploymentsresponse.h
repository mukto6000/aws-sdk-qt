// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSRESPONSE_H
#define QTAWS_GETDEPLOYMENTSRESPONSE_H

#include "sagemakeredgeresponse.h"
#include "getdeploymentsrequest.h"

namespace QtAws {
namespace SagemakerEdge {

class GetDeploymentsResponsePrivate;

class QTAWSSAGEMAKEREDGE_EXPORT GetDeploymentsResponse : public SagemakerEdgeResponse {
    Q_OBJECT

public:
    GetDeploymentsResponse(const GetDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentsResponse)
    Q_DISABLE_COPY(GetDeploymentsResponse)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
