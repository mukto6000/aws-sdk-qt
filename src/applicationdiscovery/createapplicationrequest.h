// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONREQUEST_H
#define QTAWS_CREATEAPPLICATIONREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class CreateApplicationRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT CreateApplicationRequest : public ApplicationDiscoveryRequest {

public:
    CreateApplicationRequest(const CreateApplicationRequest &other);
    CreateApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApplicationRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
