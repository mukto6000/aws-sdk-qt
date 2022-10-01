// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGRESPONSE_H
#define QTAWS_GETCONFIGRESPONSE_H

#include "cloudhsmresponse.h"
#include "getconfigrequest.h"

namespace QtAws {
namespace CloudHsm {

class GetConfigResponsePrivate;

class QTAWSCLOUDHSM_EXPORT GetConfigResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    GetConfigResponse(const GetConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigResponse)
    Q_DISABLE_COPY(GetConfigResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
