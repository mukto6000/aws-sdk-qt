// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTACTREQUEST_P_H
#define QTAWS_CREATECONTACTREQUEST_P_H

#include "sesv2request_p.h"
#include "createcontactrequest.h"

namespace QtAws {
namespace SESv2 {

class CreateContactRequest;

class CreateContactRequestPrivate : public SESv2RequestPrivate {

public:
    CreateContactRequestPrivate(const SESv2Request::Action action,
                                   CreateContactRequest * const q);
    CreateContactRequestPrivate(const CreateContactRequestPrivate &other,
                                   CreateContactRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContactRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
