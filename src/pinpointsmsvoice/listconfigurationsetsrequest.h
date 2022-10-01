// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGURATIONSETSREQUEST_H
#define QTAWS_LISTCONFIGURATIONSETSREQUEST_H

#include "pinpointsmsvoicerequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class ListConfigurationSetsRequestPrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT ListConfigurationSetsRequest : public PinpointSmsVoiceRequest {

public:
    ListConfigurationSetsRequest(const ListConfigurationSetsRequest &other);
    ListConfigurationSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConfigurationSetsRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
