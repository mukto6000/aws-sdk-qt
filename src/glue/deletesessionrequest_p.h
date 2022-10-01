// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESESSIONREQUEST_P_H
#define QTAWS_DELETESESSIONREQUEST_P_H

#include "gluerequest_p.h"
#include "deletesessionrequest.h"

namespace QtAws {
namespace Glue {

class DeleteSessionRequest;

class DeleteSessionRequestPrivate : public GlueRequestPrivate {

public:
    DeleteSessionRequestPrivate(const GlueRequest::Action action,
                                   DeleteSessionRequest * const q);
    DeleteSessionRequestPrivate(const DeleteSessionRequestPrivate &other,
                                   DeleteSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSessionRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
