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

#ifndef QTAWS_DELETEINTENTVERSIONREQUEST_P_H
#define QTAWS_DELETEINTENTVERSIONREQUEST_P_H

#include "lexmodelbuildingservicerequest_p.h"
#include "deleteintentversionrequest.h"

namespace QtAws {
namespace LexModelBuildingService {

class DeleteIntentVersionRequest;

class QTAWS_EXPORT DeleteIntentVersionRequestPrivate : public LexModelBuildingServiceRequestPrivate {

public:
    DeleteIntentVersionRequestPrivate(const LexModelBuildingServiceRequest::Action action,
                                   DeleteIntentVersionRequest * const q);
    DeleteIntentVersionRequestPrivate(const DeleteIntentVersionRequestPrivate &other,
                                   DeleteIntentVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntentVersionRequest)

};

} // namespace LexModelBuildingService
} // namespace QtAws

#endif
