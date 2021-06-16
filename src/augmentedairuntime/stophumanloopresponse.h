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

#ifndef QTAWS_STOPHUMANLOOPRESPONSE_H
#define QTAWS_STOPHUMANLOOPRESPONSE_H

#include "augmentedairuntimeresponse.h"
#include "stophumanlooprequest.h"

namespace QtAws {
namespace AugmentedAIRuntime {

class StopHumanLoopResponsePrivate;

class QTAWS_EXPORT StopHumanLoopResponse : public AugmentedAIRuntimeResponse {
    Q_OBJECT

public:
    StopHumanLoopResponse(const StopHumanLoopRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopHumanLoopRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopHumanLoopResponse)
    Q_DISABLE_COPY(StopHumanLoopResponse)

};

} // namespace AugmentedAIRuntime
} // namespace QtAws

#endif
