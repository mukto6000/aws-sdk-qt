// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALIASREQUEST_P_H
#define QTAWS_CREATEALIASREQUEST_P_H

#include "gameliftrequest_p.h"
#include "createaliasrequest.h"

namespace QtAws {
namespace GameLift {

class CreateAliasRequest;

class CreateAliasRequestPrivate : public GameLiftRequestPrivate {

public:
    CreateAliasRequestPrivate(const GameLiftRequest::Action action,
                                   CreateAliasRequest * const q);
    CreateAliasRequestPrivate(const CreateAliasRequestPrivate &other,
                                   CreateAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAliasRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
