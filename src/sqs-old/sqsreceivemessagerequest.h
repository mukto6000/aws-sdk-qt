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

#ifndef SQSRECEIVEMESSAGEREQUEST_H
#define SQSRECEIVEMESSAGEREQUEST_H

#include "sqsrequest.h"

namespace QtAws {
namespace SqsOld {

class SqsReceiveMessageRequestPrivate;

class QTAWS_EXPORT SqsReceiveMessageRequest : public SqsRequest {

public:
  //SqsReceiveMessageRequest(...); ///< @todo
    SqsReceiveMessageRequest(const SqsReceiveMessageRequest &other);
    SqsReceiveMessageRequest();

    virtual bool isValid() const;

protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(SqsReceiveMessageRequest)
    friend class TestSqsReceiveMessageRequest;
};

} // namespace SqsOld
} // namespace QtAws

#endif
