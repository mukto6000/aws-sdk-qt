// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESIZERESPONSE_H
#define QTAWS_CANCELRESIZERESPONSE_H

#include "redshiftresponse.h"
#include "cancelresizerequest.h"

namespace QtAws {
namespace Redshift {

class CancelResizeResponsePrivate;

class QTAWSREDSHIFT_EXPORT CancelResizeResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CancelResizeResponse(const CancelResizeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelResizeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelResizeResponse)
    Q_DISABLE_COPY(CancelResizeResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
