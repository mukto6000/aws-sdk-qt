// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDESTINATIONSREQUEST_H
#define QTAWS_LISTDESTINATIONSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListDestinationsRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT ListDestinationsRequest : public IoTWirelessRequest {

public:
    ListDestinationsRequest(const ListDestinationsRequest &other);
    ListDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDestinationsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
