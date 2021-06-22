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

#ifndef QTAWS_GETEC2INSTANCERECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETEC2INSTANCERECOMMENDATIONSREQUEST_P_H

#include "computeoptimizerrequest_p.h"
#include "getec2instancerecommendationsrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEC2InstanceRecommendationsRequest;

class GetEC2InstanceRecommendationsRequestPrivate : public ComputeOptimizerRequestPrivate {

public:
    GetEC2InstanceRecommendationsRequestPrivate(const ComputeOptimizerRequest::Action action,
                                   GetEC2InstanceRecommendationsRequest * const q);
    GetEC2InstanceRecommendationsRequestPrivate(const GetEC2InstanceRecommendationsRequestPrivate &other,
                                   GetEC2InstanceRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEC2InstanceRecommendationsRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
