// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEFLEETREQUEST_P_H
#define QTAWS_DELETEDEVICEFLEETREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletedevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteDeviceFleetRequest;

class DeleteDeviceFleetRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteDeviceFleetRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteDeviceFleetRequest * const q);
    DeleteDeviceFleetRequestPrivate(const DeleteDeviceFleetRequestPrivate &other,
                                   DeleteDeviceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
