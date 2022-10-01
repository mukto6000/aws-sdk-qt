// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELREQUEST_P_H
#define QTAWS_DELETECHANNELREQUEST_P_H

#include "ivsrequest_p.h"
#include "deletechannelrequest.h"

namespace QtAws {
namespace Ivs {

class DeleteChannelRequest;

class DeleteChannelRequestPrivate : public IvsRequestPrivate {

public:
    DeleteChannelRequestPrivate(const IvsRequest::Action action,
                                   DeleteChannelRequest * const q);
    DeleteChannelRequestPrivate(const DeleteChannelRequestPrivate &other,
                                   DeleteChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteChannelRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
