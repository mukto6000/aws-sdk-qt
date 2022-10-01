// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTRESPONSE_H
#define QTAWS_DELETEENVIRONMENTRESPONSE_H

#include "appconfigresponse.h"
#include "deleteenvironmentrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteEnvironmentResponsePrivate;

class QTAWSAPPCONFIG_EXPORT DeleteEnvironmentResponse : public AppConfigResponse {
    Q_OBJECT

public:
    DeleteEnvironmentResponse(const DeleteEnvironmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEnvironmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentResponse)
    Q_DISABLE_COPY(DeleteEnvironmentResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
