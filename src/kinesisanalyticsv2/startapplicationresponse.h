// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPLICATIONRESPONSE_H
#define QTAWS_STARTAPPLICATIONRESPONSE_H

#include "kinesisanalyticsv2response.h"
#include "startapplicationrequest.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class StartApplicationResponsePrivate;

class QTAWSKINESISANALYTICSV2_EXPORT StartApplicationResponse : public KinesisAnalyticsV2Response {
    Q_OBJECT

public:
    StartApplicationResponse(const StartApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartApplicationResponse)
    Q_DISABLE_COPY(StartApplicationResponse)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
