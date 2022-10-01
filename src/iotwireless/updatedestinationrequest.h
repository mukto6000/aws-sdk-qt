// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDESTINATIONREQUEST_H
#define QTAWS_UPDATEDESTINATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateDestinationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateDestinationRequest : public IoTWirelessRequest {

public:
    UpdateDestinationRequest(const UpdateDestinationRequest &other);
    UpdateDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDestinationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
