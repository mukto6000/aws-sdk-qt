// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXECUTIONSRESPONSE_H
#define QTAWS_LISTEXECUTIONSRESPONSE_H

#include "transferresponse.h"
#include "listexecutionsrequest.h"

namespace QtAws {
namespace Transfer {

class ListExecutionsResponsePrivate;

class QTAWSTRANSFER_EXPORT ListExecutionsResponse : public TransferResponse {
    Q_OBJECT

public:
    ListExecutionsResponse(const ListExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExecutionsResponse)
    Q_DISABLE_COPY(ListExecutionsResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
