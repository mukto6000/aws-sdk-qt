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

#ifndef QTAWS_MODIFYHAPGREQUEST_P_H
#define QTAWS_MODIFYHAPGREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "modifyhapgrequest.h"

namespace QtAws {
namespace CloudHSM {

class ModifyHapgRequest;

class QTAWS_EXPORT ModifyHapgRequestPrivate : public CloudHSMRequestPrivate {

public:
    ModifyHapgRequestPrivate(const CloudHSMRequest::Action action,
                                   ModifyHapgRequest * const q);
    ModifyHapgRequestPrivate(const ModifyHapgRequestPrivate &other,
                                   ModifyHapgRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyHapgRequest)

};

} // namespace CloudHSM
} // namespace QtAws

#endif