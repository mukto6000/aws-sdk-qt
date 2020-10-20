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

#ifndef QTAWS_CREATELOCATIONS3REQUEST_P_H
#define QTAWS_CREATELOCATIONS3REQUEST_P_H

#include "datasyncrequest_p.h"
#include "createlocations3request.h"

namespace QtAws {
namespace DataSync {

class CreateLocationS3Request;

class QTAWS_EXPORT CreateLocationS3RequestPrivate : public DataSyncRequestPrivate {

public:
    CreateLocationS3RequestPrivate(const DataSyncRequest::Action action,
                                   CreateLocationS3Request * const q);
    CreateLocationS3RequestPrivate(const CreateLocationS3RequestPrivate &other,
                                   CreateLocationS3Request * const q);

private:
    Q_DECLARE_PUBLIC(CreateLocationS3Request)

};

} // namespace DataSync
} // namespace QtAws

#endif