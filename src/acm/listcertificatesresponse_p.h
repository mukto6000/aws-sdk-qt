// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESRESPONSE_P_H
#define QTAWS_LISTCERTIFICATESRESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class ListCertificatesResponse;

class ListCertificatesResponsePrivate : public AcmResponsePrivate {

public:

    explicit ListCertificatesResponsePrivate(ListCertificatesResponse * const q);

    void parseListCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCertificatesResponse)
    Q_DISABLE_COPY(ListCertificatesResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
