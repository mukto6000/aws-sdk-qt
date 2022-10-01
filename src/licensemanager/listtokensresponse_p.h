// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTOKENSRESPONSE_P_H
#define QTAWS_LISTTOKENSRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class ListTokensResponse;

class ListTokensResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit ListTokensResponsePrivate(ListTokensResponse * const q);

    void parseListTokensResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTokensResponse)
    Q_DISABLE_COPY(ListTokensResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
