// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRESOURCEPOLICYREQUEST_H
#define QTAWS_PUTRESOURCEPOLICYREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class PutResourcePolicyRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT PutResourcePolicyRequest : public NetworkManagerRequest {

public:
    PutResourcePolicyRequest(const PutResourcePolicyRequest &other);
    PutResourcePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutResourcePolicyRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
