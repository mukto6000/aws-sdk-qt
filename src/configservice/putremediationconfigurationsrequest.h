// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREMEDIATIONCONFIGURATIONSREQUEST_H
#define QTAWS_PUTREMEDIATIONCONFIGURATIONSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutRemediationConfigurationsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutRemediationConfigurationsRequest : public ConfigServiceRequest {

public:
    PutRemediationConfigurationsRequest(const PutRemediationConfigurationsRequest &other);
    PutRemediationConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRemediationConfigurationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
