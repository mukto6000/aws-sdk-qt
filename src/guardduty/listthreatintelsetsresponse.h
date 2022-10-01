// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHREATINTELSETSRESPONSE_H
#define QTAWS_LISTTHREATINTELSETSRESPONSE_H

#include "guarddutyresponse.h"
#include "listthreatintelsetsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListThreatIntelSetsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT ListThreatIntelSetsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    ListThreatIntelSetsResponse(const ListThreatIntelSetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThreatIntelSetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThreatIntelSetsResponse)
    Q_DISABLE_COPY(ListThreatIntelSetsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
