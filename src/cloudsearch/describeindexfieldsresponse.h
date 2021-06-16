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

#ifndef QTAWS_DESCRIBEINDEXFIELDSRESPONSE_H
#define QTAWS_DESCRIBEINDEXFIELDSRESPONSE_H

#include "cloudsearchresponse.h"
#include "describeindexfieldsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeIndexFieldsResponsePrivate;

class QTAWS_EXPORT DescribeIndexFieldsResponse : public CloudSearchResponse {
    Q_OBJECT

public:
    DescribeIndexFieldsResponse(const DescribeIndexFieldsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIndexFieldsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIndexFieldsResponse)
    Q_DISABLE_COPY(DescribeIndexFieldsResponse)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
