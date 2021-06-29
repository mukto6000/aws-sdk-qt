/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
