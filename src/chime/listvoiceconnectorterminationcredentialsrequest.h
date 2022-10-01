// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_H
#define QTAWS_LISTVOICECONNECTORTERMINATIONCREDENTIALSREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class ListVoiceConnectorTerminationCredentialsRequestPrivate;

class QTAWSCHIME_EXPORT ListVoiceConnectorTerminationCredentialsRequest : public ChimeRequest {

public:
    ListVoiceConnectorTerminationCredentialsRequest(const ListVoiceConnectorTerminationCredentialsRequest &other);
    ListVoiceConnectorTerminationCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVoiceConnectorTerminationCredentialsRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
