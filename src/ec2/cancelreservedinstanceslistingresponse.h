// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESERVEDINSTANCESLISTINGRESPONSE_H
#define QTAWS_CANCELRESERVEDINSTANCESLISTINGRESPONSE_H

#include "ec2response.h"
#include "cancelreservedinstanceslistingrequest.h"

namespace QtAws {
namespace Ec2 {

class CancelReservedInstancesListingResponsePrivate;

class QTAWSEC2_EXPORT CancelReservedInstancesListingResponse : public Ec2Response {
    Q_OBJECT

public:
    CancelReservedInstancesListingResponse(const CancelReservedInstancesListingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelReservedInstancesListingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelReservedInstancesListingResponse)
    Q_DISABLE_COPY(CancelReservedInstancesListingResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
