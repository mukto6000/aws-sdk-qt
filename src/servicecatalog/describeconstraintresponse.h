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

#ifndef QTAWS_DESCRIBECONSTRAINTRESPONSE_H
#define QTAWS_DESCRIBECONSTRAINTRESPONSE_H

#include "servicecatalogresponse.h"
#include "describeconstraintrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeConstraintResponsePrivate;

class QTAWS_EXPORT DescribeConstraintResponse : public ServiceCatalogResponse {
    Q_OBJECT

public:
    DescribeConstraintResponse(const DescribeConstraintRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeConstraintRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeConstraintResponse)
    Q_DISABLE_COPY(DescribeConstraintResponse)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif