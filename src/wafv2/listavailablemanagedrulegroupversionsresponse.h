// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSRESPONSE_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSRESPONSE_H

#include "wafv2response.h"
#include "listavailablemanagedrulegroupversionsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupVersionsResponsePrivate;

class QTAWSWAFV2_EXPORT ListAvailableManagedRuleGroupVersionsResponse : public Wafv2Response {
    Q_OBJECT

public:
    ListAvailableManagedRuleGroupVersionsResponse(const ListAvailableManagedRuleGroupVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailableManagedRuleGroupVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableManagedRuleGroupVersionsResponse)
    Q_DISABLE_COPY(ListAvailableManagedRuleGroupVersionsResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
