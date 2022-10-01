// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDASHBOARDRESPONSE_H
#define QTAWS_DELETEDASHBOARDRESPONSE_H

#include "iotsitewiseresponse.h"
#include "deletedashboardrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteDashboardResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteDashboardResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DeleteDashboardResponse(const DeleteDashboardRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDashboardRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDashboardResponse)
    Q_DISABLE_COPY(DeleteDashboardResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
