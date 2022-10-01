// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTREQUEST_H
#define QTAWS_DELETEINPUTREQUEST_H

#include "ioteventsrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteInputRequestPrivate;

class QTAWSIOTEVENTS_EXPORT DeleteInputRequest : public IoTEventsRequest {

public:
    DeleteInputRequest(const DeleteInputRequest &other);
    DeleteInputRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInputRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
