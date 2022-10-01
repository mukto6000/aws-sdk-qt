// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELRESPONSE_H
#define QTAWS_CREATECHANNELRESPONSE_H

#include "mediapackageresponse.h"
#include "createchannelrequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateChannelResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT CreateChannelResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    CreateChannelResponse(const CreateChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelResponse)
    Q_DISABLE_COPY(CreateChannelResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
