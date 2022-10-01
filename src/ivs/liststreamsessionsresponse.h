// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMSESSIONSRESPONSE_H
#define QTAWS_LISTSTREAMSESSIONSRESPONSE_H

#include "ivsresponse.h"
#include "liststreamsessionsrequest.h"

namespace QtAws {
namespace Ivs {

class ListStreamSessionsResponsePrivate;

class QTAWSIVS_EXPORT ListStreamSessionsResponse : public IvsResponse {
    Q_OBJECT

public:
    ListStreamSessionsResponse(const ListStreamSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStreamSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamSessionsResponse)
    Q_DISABLE_COPY(ListStreamSessionsResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
