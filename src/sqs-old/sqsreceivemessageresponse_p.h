/*
    Copyright 2013-2020 Paul Colby

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

#ifndef SQSRECEIVEMESSAGERESPONSE_P_H
#define SQSRECEIVEMESSAGERESPONSE_P_H

#include "sqsresponse_p.h"

namespace QtAws {
namespace SqsOld {

class SqsReceiveMessageResponse;

class QTAWS_EXPORT SqsReceiveMessageResponsePrivate : public SqsResponsePrivate {

public:
    SqsReceiveMessageResponsePrivate(SqsReceiveMessageResponse * const q);

    void parseReceiveMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SqsReceiveMessageResponse)
    Q_DISABLE_COPY(SqsReceiveMessageResponsePrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
