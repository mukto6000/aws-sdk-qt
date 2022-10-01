// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESILIENCYPOLICYREQUEST_H
#define QTAWS_CREATERESILIENCYPOLICYREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class CreateResiliencyPolicyRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT CreateResiliencyPolicyRequest : public ResilienceHubRequest {

public:
    CreateResiliencyPolicyRequest(const CreateResiliencyPolicyRequest &other);
    CreateResiliencyPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResiliencyPolicyRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
