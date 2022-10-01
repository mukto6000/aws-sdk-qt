// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPSETRESPONSE_H
#define QTAWS_DELETEIPSETRESPONSE_H

#include "wafresponse.h"
#include "deleteipsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteIPSetResponsePrivate;

class QTAWSWAF_EXPORT DeleteIPSetResponse : public WafResponse {
    Q_OBJECT

public:
    DeleteIPSetResponse(const DeleteIPSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIPSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIPSetResponse)
    Q_DISABLE_COPY(DeleteIPSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
