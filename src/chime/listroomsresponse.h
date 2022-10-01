// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMSRESPONSE_H
#define QTAWS_LISTROOMSRESPONSE_H

#include "chimeresponse.h"
#include "listroomsrequest.h"

namespace QtAws {
namespace Chime {

class ListRoomsResponsePrivate;

class QTAWSCHIME_EXPORT ListRoomsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListRoomsResponse(const ListRoomsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRoomsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoomsResponse)
    Q_DISABLE_COPY(ListRoomsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
