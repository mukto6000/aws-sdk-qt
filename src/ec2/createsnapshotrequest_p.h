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

#ifndef QTAWS_CREATESNAPSHOTREQUEST_P_H
#define QTAWS_CREATESNAPSHOTREQUEST_P_H

#include "ec2request_p.h"
#include "createsnapshotrequest.h"

namespace QtAws {
namespace EC2 {

class CreateSnapshotRequest;

class CreateSnapshotRequestPrivate : public Ec2RequestPrivate {

public:
    CreateSnapshotRequestPrivate(const Ec2Request::Action action,
                                   CreateSnapshotRequest * const q);
    CreateSnapshotRequestPrivate(const CreateSnapshotRequestPrivate &other,
                                   CreateSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
