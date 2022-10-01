// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTREQUEST_P_H
#define QTAWS_UPDATECONTACTREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updatecontactrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateContactRequest;

class UpdateContactRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateContactRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateContactRequest * const q);
    UpdateContactRequestPrivate(const UpdateContactRequestPrivate &other,
                                   UpdateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateContactRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
