// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTALRESPONSE_H
#define QTAWS_DELETEPORTALRESPONSE_H

#include "iotsitewiseresponse.h"
#include "deleteportalrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeletePortalResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DeletePortalResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DeletePortalResponse(const DeletePortalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePortalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePortalResponse)
    Q_DISABLE_COPY(DeletePortalResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
