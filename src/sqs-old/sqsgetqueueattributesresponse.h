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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSGETQUEUEATTRIBUTES_H
#define SQSGETQUEUEATTRIBUTES_H

#include "sqsgetqueueattributesrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueAttributesResponsePrivate;

class QTAWS_EXPORT SqsGetQueueAttributesResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsGetQueueAttributesResponse(const SqsGetQueueAttributesRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsGetQueueAttributesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsGetQueueAttributesResponse)
    Q_DISABLE_COPY(SqsGetQueueAttributesResponse)
    friend class TestSqsGetQueueAttributesResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
