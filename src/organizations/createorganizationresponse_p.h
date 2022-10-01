// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEORGANIZATIONRESPONSE_P_H
#define QTAWS_CREATEORGANIZATIONRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class CreateOrganizationResponse;

class CreateOrganizationResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit CreateOrganizationResponsePrivate(CreateOrganizationResponse * const q);

    void parseCreateOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOrganizationResponse)
    Q_DISABLE_COPY(CreateOrganizationResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
