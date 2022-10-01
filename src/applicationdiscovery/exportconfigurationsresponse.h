// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTCONFIGURATIONSRESPONSE_H
#define QTAWS_EXPORTCONFIGURATIONSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "exportconfigurationsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ExportConfigurationsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ExportConfigurationsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    ExportConfigurationsResponse(const ExportConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportConfigurationsResponse)
    Q_DISABLE_COPY(ExportConfigurationsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
