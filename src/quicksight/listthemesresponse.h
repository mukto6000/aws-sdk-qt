// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHEMESRESPONSE_H
#define QTAWS_LISTTHEMESRESPONSE_H

#include "quicksightresponse.h"
#include "listthemesrequest.h"

namespace QtAws {
namespace QuickSight {

class ListThemesResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListThemesResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListThemesResponse(const ListThemesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThemesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThemesResponse)
    Q_DISABLE_COPY(ListThemesResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
