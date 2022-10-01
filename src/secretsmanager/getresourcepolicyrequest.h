// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEPOLICYREQUEST_H
#define QTAWS_GETRESOURCEPOLICYREQUEST_H

#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class GetResourcePolicyRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT GetResourcePolicyRequest : public SecretsManagerRequest {

public:
    GetResourcePolicyRequest(const GetResourcePolicyRequest &other);
    GetResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourcePolicyRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
