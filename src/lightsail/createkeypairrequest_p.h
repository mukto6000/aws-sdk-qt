// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYPAIRREQUEST_P_H
#define QTAWS_CREATEKEYPAIRREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createkeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateKeyPairRequest;

class CreateKeyPairRequestPrivate : public LightsailRequestPrivate {

public:
    CreateKeyPairRequestPrivate(const LightsailRequest::Action action,
                                   CreateKeyPairRequest * const q);
    CreateKeyPairRequestPrivate(const CreateKeyPairRequestPrivate &other,
                                   CreateKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
