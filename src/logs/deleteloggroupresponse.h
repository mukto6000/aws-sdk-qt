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

#ifndef QTAWS_DELETELOGGROUPRESPONSE_H
#define QTAWS_DELETELOGGROUPRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "deleteloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogGroupResponsePrivate;

class QTAWS_EXPORT DeleteLogGroupResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DeleteLogGroupResponse(const DeleteLogGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLogGroupRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteLogGroupResponse)
    Q_DISABLE_COPY(DeleteLogGroupResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif