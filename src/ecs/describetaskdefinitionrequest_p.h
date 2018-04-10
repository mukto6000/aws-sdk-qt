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

#ifndef QTAWS_DESCRIBETASKDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBETASKDEFINITIONREQUEST_P_H

#include "ecsrequest_p.h"
#include "describetaskdefinitionrequest.h"

namespace QtAws {
namespace ECS {

class DescribeTaskDefinitionRequest;

class QTAWS_EXPORT DescribeTaskDefinitionRequestPrivate : public ECSRequestPrivate {

public:
    DescribeTaskDefinitionRequestPrivate(const ECSRequest::Action action,
                                   DescribeTaskDefinitionRequest * const q);
    DescribeTaskDefinitionRequestPrivate(const DescribeTaskDefinitionRequestPrivate &other,
                                   DescribeTaskDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTaskDefinitionRequest)

};

} // namespace ECS
} // namespace QtAws

#endif