// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEADMINREQUEST_P_H
#define QTAWS_CREATEAPPINSTANCEADMINREQUEST_P_H

#include "chimerequest_p.h"
#include "createappinstanceadminrequest.h"

namespace QtAws {
namespace Chime {

class CreateAppInstanceAdminRequest;

class CreateAppInstanceAdminRequestPrivate : public ChimeRequestPrivate {

public:
    CreateAppInstanceAdminRequestPrivate(const ChimeRequest::Action action,
                                   CreateAppInstanceAdminRequest * const q);
    CreateAppInstanceAdminRequestPrivate(const CreateAppInstanceAdminRequestPrivate &other,
                                   CreateAppInstanceAdminRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceAdminRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
