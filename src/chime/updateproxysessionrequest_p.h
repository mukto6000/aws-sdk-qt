// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROXYSESSIONREQUEST_P_H
#define QTAWS_UPDATEPROXYSESSIONREQUEST_P_H

#include "chimerequest_p.h"
#include "updateproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class UpdateProxySessionRequest;

class UpdateProxySessionRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateProxySessionRequestPrivate(const ChimeRequest::Action action,
                                   UpdateProxySessionRequest * const q);
    UpdateProxySessionRequestPrivate(const UpdateProxySessionRequestPrivate &other,
                                   UpdateProxySessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProxySessionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
