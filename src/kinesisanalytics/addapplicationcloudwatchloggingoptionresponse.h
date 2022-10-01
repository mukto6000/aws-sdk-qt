// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_H
#define QTAWS_ADDAPPLICATIONCLOUDWATCHLOGGINGOPTIONRESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "addapplicationcloudwatchloggingoptionrequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationCloudWatchLoggingOptionResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationCloudWatchLoggingOptionResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    AddApplicationCloudWatchLoggingOptionResponse(const AddApplicationCloudWatchLoggingOptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddApplicationCloudWatchLoggingOptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationCloudWatchLoggingOptionResponse)
    Q_DISABLE_COPY(AddApplicationCloudWatchLoggingOptionResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
