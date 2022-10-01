// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEORGANIZATIONCONFIGURATIONRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class UpdateOrganizationConfigurationResponse;

class UpdateOrganizationConfigurationResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit UpdateOrganizationConfigurationResponsePrivate(UpdateOrganizationConfigurationResponse * const q);

    void parseUpdateOrganizationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOrganizationConfigurationResponse)
    Q_DISABLE_COPY(UpdateOrganizationConfigurationResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
