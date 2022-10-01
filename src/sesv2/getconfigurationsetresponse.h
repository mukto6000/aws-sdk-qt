// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETRESPONSE_H
#define QTAWS_GETCONFIGURATIONSETRESPONSE_H

#include "sesv2response.h"
#include "getconfigurationsetrequest.h"

namespace QtAws {
namespace SESv2 {

class GetConfigurationSetResponsePrivate;

class QTAWSSESV2_EXPORT GetConfigurationSetResponse : public SESv2Response {
    Q_OBJECT

public:
    GetConfigurationSetResponse(const GetConfigurationSetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConfigurationSetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationSetResponse)
    Q_DISABLE_COPY(GetConfigurationSetResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
