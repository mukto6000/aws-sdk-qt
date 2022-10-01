// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_H
#define QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CreateConfigurationSetEventDestinationRequestPrivate;

class QTAWSSES_EXPORT CreateConfigurationSetEventDestinationRequest : public SesRequest {

public:
    CreateConfigurationSetEventDestinationRequest(const CreateConfigurationSetEventDestinationRequest &other);
    CreateConfigurationSetEventDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationSetEventDestinationRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
