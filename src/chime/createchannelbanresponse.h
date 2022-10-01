// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELBANRESPONSE_H
#define QTAWS_CREATECHANNELBANRESPONSE_H

#include "chimeresponse.h"
#include "createchannelbanrequest.h"

namespace QtAws {
namespace Chime {

class CreateChannelBanResponsePrivate;

class QTAWSCHIME_EXPORT CreateChannelBanResponse : public ChimeResponse {
    Q_OBJECT

public:
    CreateChannelBanResponse(const CreateChannelBanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChannelBanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelBanResponse)
    Q_DISABLE_COPY(CreateChannelBanResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
