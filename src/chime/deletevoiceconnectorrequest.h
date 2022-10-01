// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTORREQUEST_H
#define QTAWS_DELETEVOICECONNECTORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorRequest(const DeleteVoiceConnectorRequest &other);
    DeleteVoiceConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
