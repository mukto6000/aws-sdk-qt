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

#ifndef QTAWS_GETCOSTESTIMATIONREQUEST_P_H
#define QTAWS_GETCOSTESTIMATIONREQUEST_P_H

#include "devopsgururequest_p.h"
#include "getcostestimationrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class GetCostEstimationRequest;

class QTAWS_EXPORT GetCostEstimationRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    GetCostEstimationRequestPrivate(const DevOpsGuruRequest::Action action,
                                   GetCostEstimationRequest * const q);
    GetCostEstimationRequestPrivate(const GetCostEstimationRequestPrivate &other,
                                   GetCostEstimationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCostEstimationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
