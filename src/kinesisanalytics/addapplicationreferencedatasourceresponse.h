// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDAPPLICATIONREFERENCEDATASOURCERESPONSE_H
#define QTAWS_ADDAPPLICATIONREFERENCEDATASOURCERESPONSE_H

#include "kinesisanalyticsresponse.h"
#include "addapplicationreferencedatasourcerequest.h"

namespace QtAws {
namespace KinesisAnalytics {

class AddApplicationReferenceDataSourceResponsePrivate;

class QTAWSKINESISANALYTICS_EXPORT AddApplicationReferenceDataSourceResponse : public KinesisAnalyticsResponse {
    Q_OBJECT

public:
    AddApplicationReferenceDataSourceResponse(const AddApplicationReferenceDataSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddApplicationReferenceDataSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddApplicationReferenceDataSourceResponse)
    Q_DISABLE_COPY(AddApplicationReferenceDataSourceResponse)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
