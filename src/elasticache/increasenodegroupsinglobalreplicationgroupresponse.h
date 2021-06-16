/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_H
#define QTAWS_INCREASENODEGROUPSINGLOBALREPLICATIONGROUPRESPONSE_H

#include "elasticacheresponse.h"
#include "increasenodegroupsinglobalreplicationgrouprequest.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseNodeGroupsInGlobalReplicationGroupResponsePrivate;

class QTAWS_EXPORT IncreaseNodeGroupsInGlobalReplicationGroupResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    IncreaseNodeGroupsInGlobalReplicationGroupResponse(const IncreaseNodeGroupsInGlobalReplicationGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IncreaseNodeGroupsInGlobalReplicationGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IncreaseNodeGroupsInGlobalReplicationGroupResponse)
    Q_DISABLE_COPY(IncreaseNodeGroupsInGlobalReplicationGroupResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
