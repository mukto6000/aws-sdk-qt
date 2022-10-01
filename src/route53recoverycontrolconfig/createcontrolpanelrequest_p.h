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

#ifndef QTAWS_CREATECONTROLPANELREQUEST_P_H
#define QTAWS_CREATECONTROLPANELREQUEST_P_H

#include "route53recoverycontrolconfigrequest_p.h"
#include "createcontrolpanelrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class CreateControlPanelRequest;

class CreateControlPanelRequestPrivate : public Route53RecoveryControlConfigRequestPrivate {

public:
    CreateControlPanelRequestPrivate(const Route53RecoveryControlConfigRequest::Action action,
                                   CreateControlPanelRequest * const q);
    CreateControlPanelRequestPrivate(const CreateControlPanelRequestPrivate &other,
                                   CreateControlPanelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateControlPanelRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
