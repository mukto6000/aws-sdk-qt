// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_H

#include "inspector2response.h"
#include "updateorganizationconfigurationrequest.h"

namespace QtAws {
namespace Inspector2 {

class UpdateOrganizationConfigurationResponsePrivate;

class QTAWSINSPECTOR2_EXPORT UpdateOrganizationConfigurationResponse : public Inspector2Response {
    Q_OBJECT

public:
    UpdateOrganizationConfigurationResponse(const UpdateOrganizationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOrganizationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOrganizationConfigurationResponse)
    Q_DISABLE_COPY(UpdateOrganizationConfigurationResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
