// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTRECOVERYINSTANCEREQUEST_H
#define QTAWS_DISCONNECTRECOVERYINSTANCEREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class DisconnectRecoveryInstanceRequestPrivate;

class QTAWSDRS_EXPORT DisconnectRecoveryInstanceRequest : public DrsRequest {

public:
    DisconnectRecoveryInstanceRequest(const DisconnectRecoveryInstanceRequest &other);
    DisconnectRecoveryInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectRecoveryInstanceRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
