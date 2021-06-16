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

#ifndef QTAWS_GETINVITATIONSCOUNTREQUEST_P_H
#define QTAWS_GETINVITATIONSCOUNTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "getinvitationscountrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetInvitationsCountRequest;

class QTAWS_EXPORT GetInvitationsCountRequestPrivate : public SecurityHubRequestPrivate {

public:
    GetInvitationsCountRequestPrivate(const SecurityHubRequest::Action action,
                                   GetInvitationsCountRequest * const q);
    GetInvitationsCountRequestPrivate(const GetInvitationsCountRequestPrivate &other,
                                   GetInvitationsCountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInvitationsCountRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
