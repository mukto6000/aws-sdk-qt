// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCRIPTREQUEST_P_H
#define QTAWS_DELETESCRIPTREQUEST_P_H

#include "gameliftrequest_p.h"
#include "deletescriptrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteScriptRequest;

class DeleteScriptRequestPrivate : public GameLiftRequestPrivate {

public:
    DeleteScriptRequestPrivate(const GameLiftRequest::Action action,
                                   DeleteScriptRequest * const q);
    DeleteScriptRequestPrivate(const DeleteScriptRequestPrivate &other,
                                   DeleteScriptRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScriptRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
