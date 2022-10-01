// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPROVEDORIGINRESPONSE_H
#define QTAWS_ASSOCIATEAPPROVEDORIGINRESPONSE_H

#include "connectresponse.h"
#include "associateapprovedoriginrequest.h"

namespace QtAws {
namespace Connect {

class AssociateApprovedOriginResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateApprovedOriginResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateApprovedOriginResponse(const AssociateApprovedOriginRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateApprovedOriginRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApprovedOriginResponse)
    Q_DISABLE_COPY(AssociateApprovedOriginResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
