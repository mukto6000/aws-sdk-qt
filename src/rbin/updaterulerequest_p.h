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

#ifndef QTAWS_UPDATERULEREQUEST_P_H
#define QTAWS_UPDATERULEREQUEST_P_H

#include "rbinrequest_p.h"
#include "updaterulerequest.h"

namespace QtAws {
namespace Rbin {

class UpdateRuleRequest;

class UpdateRuleRequestPrivate : public RbinRequestPrivate {

public:
    UpdateRuleRequestPrivate(const RbinRequest::Action action,
                                   UpdateRuleRequest * const q);
    UpdateRuleRequestPrivate(const UpdateRuleRequestPrivate &other,
                                   UpdateRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRuleRequest)

};

} // namespace Rbin
} // namespace QtAws

#endif
