/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RESTOREFROMCLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_RESTOREFROMCLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "restorefromclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class RestoreFromClusterSnapshotResponsePrivate;

class QTAWS_EXPORT RestoreFromClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RestoreFromClusterSnapshotResponse(const RestoreFromClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreFromClusterSnapshotRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(RestoreFromClusterSnapshotResponse)
    Q_DISABLE_COPY(RestoreFromClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif