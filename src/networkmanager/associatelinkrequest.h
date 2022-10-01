// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELINKREQUEST_H
#define QTAWS_ASSOCIATELINKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class AssociateLinkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT AssociateLinkRequest : public NetworkManagerRequest {

public:
    AssociateLinkRequest(const AssociateLinkRequest &other);
    AssociateLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
