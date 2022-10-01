// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEATTENDEERESPONSE_H
#define QTAWS_BATCHCREATEATTENDEERESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "batchcreateattendeerequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class BatchCreateAttendeeResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT BatchCreateAttendeeResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    BatchCreateAttendeeResponse(const BatchCreateAttendeeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCreateAttendeeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateAttendeeResponse)
    Q_DISABLE_COPY(BatchCreateAttendeeResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
