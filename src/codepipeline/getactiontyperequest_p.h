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

#ifndef QTAWS_GETACTIONTYPEREQUEST_P_H
#define QTAWS_GETACTIONTYPEREQUEST_P_H

#include "codepipelinerequest_p.h"
#include "getactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class GetActionTypeRequest;

class QTAWS_EXPORT GetActionTypeRequestPrivate : public CodePipelineRequestPrivate {

public:
    GetActionTypeRequestPrivate(const CodePipelineRequest::Action action,
                                   GetActionTypeRequest * const q);
    GetActionTypeRequestPrivate(const GetActionTypeRequestPrivate &other,
                                   GetActionTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetActionTypeRequest)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
