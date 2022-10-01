// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class UpdateConfigurationSetEventDestinationRequestPrivate;

class QTAWSSESV2_EXPORT UpdateConfigurationSetEventDestinationRequest : public SESv2Request {

public:
    UpdateConfigurationSetEventDestinationRequest(const UpdateConfigurationSetEventDestinationRequest &other);
    UpdateConfigurationSetEventDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetEventDestinationRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
