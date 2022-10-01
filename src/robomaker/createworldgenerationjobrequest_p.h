// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORLDGENERATIONJOBREQUEST_P_H
#define QTAWS_CREATEWORLDGENERATIONJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "createworldgenerationjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateWorldGenerationJobRequest;

class CreateWorldGenerationJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CreateWorldGenerationJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CreateWorldGenerationJobRequest * const q);
    CreateWorldGenerationJobRequestPrivate(const CreateWorldGenerationJobRequestPrivate &other,
                                   CreateWorldGenerationJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorldGenerationJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
