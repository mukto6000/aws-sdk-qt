// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETRESPONSE_H
#define QTAWS_CREATEFLEETRESPONSE_H

#include "worklinkresponse.h"
#include "createfleetrequest.h"

namespace QtAws {
namespace WorkLink {

class CreateFleetResponsePrivate;

class QTAWSWORKLINK_EXPORT CreateFleetResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    CreateFleetResponse(const CreateFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetResponse)
    Q_DISABLE_COPY(CreateFleetResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
