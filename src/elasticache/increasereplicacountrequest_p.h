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

#ifndef QTAWS_INCREASEREPLICACOUNTREQUEST_P_H
#define QTAWS_INCREASEREPLICACOUNTREQUEST_P_H

#include "elasticacherequest_p.h"
#include "increasereplicacountrequest.h"

namespace QtAws {
namespace ElastiCache {

class IncreaseReplicaCountRequest;

class IncreaseReplicaCountRequestPrivate : public ElastiCacheRequestPrivate {

public:
    IncreaseReplicaCountRequestPrivate(const ElastiCacheRequest::Action action,
                                   IncreaseReplicaCountRequest * const q);
    IncreaseReplicaCountRequestPrivate(const IncreaseReplicaCountRequestPrivate &other,
                                   IncreaseReplicaCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(IncreaseReplicaCountRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
