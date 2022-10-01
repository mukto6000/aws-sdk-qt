// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEREQUEST_P_H
#define QTAWS_CREATEPROFILEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateProfileRequest;

class CreateProfileRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateProfileRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateProfileRequest * const q);
    CreateProfileRequestPrivate(const CreateProfileRequestPrivate &other,
                                   CreateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
