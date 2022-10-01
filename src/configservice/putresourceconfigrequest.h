// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCECONFIGREQUEST_H
#define QTAWS_PUTRESOURCECONFIGREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutResourceConfigRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutResourceConfigRequest : public ConfigServiceRequest {

public:
    PutResourceConfigRequest(const PutResourceConfigRequest &other);
    PutResourceConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
