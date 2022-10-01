// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class PutConfigurationSetDeliveryOptionsRequestPrivate;

class QTAWSSES_EXPORT PutConfigurationSetDeliveryOptionsRequest : public SesRequest {

public:
    PutConfigurationSetDeliveryOptionsRequest(const PutConfigurationSetDeliveryOptionsRequest &other);
    PutConfigurationSetDeliveryOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetDeliveryOptionsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
