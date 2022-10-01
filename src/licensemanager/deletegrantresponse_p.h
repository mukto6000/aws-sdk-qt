// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRANTRESPONSE_P_H
#define QTAWS_DELETEGRANTRESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class DeleteGrantResponse;

class DeleteGrantResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit DeleteGrantResponsePrivate(DeleteGrantResponse * const q);

    void parseDeleteGrantResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGrantResponse)
    Q_DISABLE_COPY(DeleteGrantResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
