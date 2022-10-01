// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMRESPONSE_H
#define QTAWS_DELETEROOMRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "deleteroomrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteRoomResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT DeleteRoomResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    DeleteRoomResponse(const DeleteRoomRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRoomRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoomResponse)
    Q_DISABLE_COPY(DeleteRoomResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
