// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBYTEMATCHSETRESPONSE_H
#define QTAWS_DELETEBYTEMATCHSETRESPONSE_H

#include "wafresponse.h"
#include "deletebytematchsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteByteMatchSetResponsePrivate;

class QTAWSWAF_EXPORT DeleteByteMatchSetResponse : public WafResponse {
    Q_OBJECT

public:
    DeleteByteMatchSetResponse(const DeleteByteMatchSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteByteMatchSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteByteMatchSetResponse)
    Q_DISABLE_COPY(DeleteByteMatchSetResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
