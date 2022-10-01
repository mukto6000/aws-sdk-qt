// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTRESPONSE_H
#define QTAWS_CREATESNAPSHOTRESPONSE_H

#include "gamesparksresponse.h"
#include "createsnapshotrequest.h"

namespace QtAws {
namespace GameSparks {

class CreateSnapshotResponsePrivate;

class QTAWSGAMESPARKS_EXPORT CreateSnapshotResponse : public GameSparksResponse {
    Q_OBJECT

public:
    CreateSnapshotResponse(const CreateSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotResponse)
    Q_DISABLE_COPY(CreateSnapshotResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
