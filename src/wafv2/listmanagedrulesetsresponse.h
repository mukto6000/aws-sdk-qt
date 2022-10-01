// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDRULESETSRESPONSE_H
#define QTAWS_LISTMANAGEDRULESETSRESPONSE_H

#include "wafv2response.h"
#include "listmanagedrulesetsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListManagedRuleSetsResponsePrivate;

class QTAWSWAFV2_EXPORT ListManagedRuleSetsResponse : public Wafv2Response {
    Q_OBJECT

public:
    ListManagedRuleSetsResponse(const ListManagedRuleSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListManagedRuleSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListManagedRuleSetsResponse)
    Q_DISABLE_COPY(ListManagedRuleSetsResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
