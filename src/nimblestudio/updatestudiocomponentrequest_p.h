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

#ifndef QTAWS_UPDATESTUDIOCOMPONENTREQUEST_P_H
#define QTAWS_UPDATESTUDIOCOMPONENTREQUEST_P_H

#include "nimblestudiorequest_p.h"
#include "updatestudiocomponentrequest.h"

namespace QtAws {
namespace NimbleStudio {

class UpdateStudioComponentRequest;

class QTAWS_EXPORT UpdateStudioComponentRequestPrivate : public NimbleStudioRequestPrivate {

public:
    UpdateStudioComponentRequestPrivate(const NimbleStudioRequest::Action action,
                                   UpdateStudioComponentRequest * const q);
    UpdateStudioComponentRequestPrivate(const UpdateStudioComponentRequestPrivate &other,
                                   UpdateStudioComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateStudioComponentRequest)

};

} // namespace NimbleStudio
} // namespace QtAws

#endif
