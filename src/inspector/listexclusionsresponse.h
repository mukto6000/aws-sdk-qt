// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXCLUSIONSRESPONSE_H
#define QTAWS_LISTEXCLUSIONSRESPONSE_H

#include "inspectorresponse.h"
#include "listexclusionsrequest.h"

namespace QtAws {
namespace Inspector {

class ListExclusionsResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListExclusionsResponse : public InspectorResponse {
    Q_OBJECT

public:
    ListExclusionsResponse(const ListExclusionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExclusionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExclusionsResponse)
    Q_DISABLE_COPY(ListExclusionsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
