// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEATTENDEERESPONSE_H
#define QTAWS_CREATEATTENDEERESPONSE_H

#include "chimeresponse.h"
#include "createattendeerequest.h"

namespace QtAws {
namespace Chime {

class CreateAttendeeResponsePrivate;

class QTAWSCHIME_EXPORT CreateAttendeeResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateAttendeeResponse(const CreateAttendeeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAttendeeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAttendeeResponse)
    Q_DISABLE_COPY(CreateAttendeeResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
