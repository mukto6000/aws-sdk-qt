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

#ifndef QTAWS_DELETEMATCHMAKINGRULESETREQUEST_P_H
#define QTAWS_DELETEMATCHMAKINGRULESETREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletematchmakingrulesetrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingRuleSetRequest;

class QTAWS_EXPORT DeleteMatchmakingRuleSetRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteMatchmakingRuleSetRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteMatchmakingRuleSetRequest * const q);
    DeleteMatchmakingRuleSetRequestPrivate(const DeleteMatchmakingRuleSetRequestPrivate &other,
                                   DeleteMatchmakingRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMatchmakingRuleSetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
