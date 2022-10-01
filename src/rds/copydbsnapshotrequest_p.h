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

#ifndef QTAWS_COPYDBSNAPSHOTREQUEST_P_H
#define QTAWS_COPYDBSNAPSHOTREQUEST_P_H

#include "rdsrequest_p.h"
#include "copydbsnapshotrequest.h"

namespace QtAws {
namespace Rds {

class CopyDBSnapshotRequest;

class CopyDBSnapshotRequestPrivate : public RdsRequestPrivate {

public:
    CopyDBSnapshotRequestPrivate(const RdsRequest::Action action,
                                   CopyDBSnapshotRequest * const q);
    CopyDBSnapshotRequestPrivate(const CopyDBSnapshotRequestPrivate &other,
                                   CopyDBSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopyDBSnapshotRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
