// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORGROUPREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTORGROUPREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorGroupRequest;

class DeleteVoiceConnectorGroupRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorGroupRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorGroupRequest * const q);
    DeleteVoiceConnectorGroupRequestPrivate(const DeleteVoiceConnectorGroupRequestPrivate &other,
                                   DeleteVoiceConnectorGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
