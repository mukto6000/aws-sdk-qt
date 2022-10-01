// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCELLSREQUEST_H
#define QTAWS_LISTCELLSREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class ListCellsRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT ListCellsRequest : public Route53RecoveryReadinessRequest {

public:
    ListCellsRequest(const ListCellsRequest &other);
    ListCellsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCellsRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
