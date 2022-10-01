// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSRESPONSE_H
#define QTAWS_LISTENDPOINTSRESPONSE_H

#include "comprehendresponse.h"
#include "listendpointsrequest.h"

namespace QtAws {
namespace Comprehend {

class ListEndpointsResponsePrivate;

class QTAWSCOMPREHEND_EXPORT ListEndpointsResponse : public ComprehendResponse {
    Q_OBJECT

public:
    ListEndpointsResponse(const ListEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointsResponse)
    Q_DISABLE_COPY(ListEndpointsResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
