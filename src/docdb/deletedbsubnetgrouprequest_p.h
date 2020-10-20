/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_DELETEDBSUBNETGROUPREQUEST_P_H
#define QTAWS_DELETEDBSUBNETGROUPREQUEST_P_H

#include "docdbrequest_p.h"
#include "deletedbsubnetgrouprequest.h"

namespace QtAws {
namespace DocDB {

class DeleteDBSubnetGroupRequest;

class QTAWS_EXPORT DeleteDBSubnetGroupRequestPrivate : public DocDBRequestPrivate {

public:
    DeleteDBSubnetGroupRequestPrivate(const DocDBRequest::Action action,
                                   DeleteDBSubnetGroupRequest * const q);
    DeleteDBSubnetGroupRequestPrivate(const DeleteDBSubnetGroupRequestPrivate &other,
                                   DeleteDBSubnetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDBSubnetGroupRequest)

};

} // namespace DocDB
} // namespace QtAws

#endif