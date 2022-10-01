// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIVITYINFORESPONSE_H
#define QTAWS_GETCONNECTIVITYINFORESPONSE_H

#include "greengrassv2response.h"
#include "getconnectivityinforequest.h"

namespace QtAws {
namespace GreengrassV2 {

class GetConnectivityInfoResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT GetConnectivityInfoResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    GetConnectivityInfoResponse(const GetConnectivityInfoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectivityInfoRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectivityInfoResponse)
    Q_DISABLE_COPY(GetConnectivityInfoResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
