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

#ifndef QTAWS_GETGRAPHQLAPIREQUEST_P_H
#define QTAWS_GETGRAPHQLAPIREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getgraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class GetGraphqlApiRequest;

class QTAWS_EXPORT GetGraphqlApiRequestPrivate : public AppSyncRequestPrivate {

public:
    GetGraphqlApiRequestPrivate(const AppSyncRequest::Action action,
                                   GetGraphqlApiRequest * const q);
    GetGraphqlApiRequestPrivate(const GetGraphqlApiRequestPrivate &other,
                                   GetGraphqlApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
