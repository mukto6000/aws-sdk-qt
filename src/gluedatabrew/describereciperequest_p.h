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

#ifndef QTAWS_DESCRIBERECIPEREQUEST_P_H
#define QTAWS_DESCRIBERECIPEREQUEST_P_H

#include "gluedatabrewrequest_p.h"
#include "describereciperequest.h"

namespace QtAws {
namespace GlueDataBrew {

class DescribeRecipeRequest;

class QTAWS_EXPORT DescribeRecipeRequestPrivate : public GlueDataBrewRequestPrivate {

public:
    DescribeRecipeRequestPrivate(const GlueDataBrewRequest::Action action,
                                   DescribeRecipeRequest * const q);
    DescribeRecipeRequestPrivate(const DescribeRecipeRequestPrivate &other,
                                   DescribeRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecipeRequest)

};

} // namespace GlueDataBrew
} // namespace QtAws

#endif