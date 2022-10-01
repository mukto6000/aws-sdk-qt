// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCERTIFICATERESPONSE_P_H
#define QTAWS_REQUESTCERTIFICATERESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class RequestCertificateResponse;

class RequestCertificateResponsePrivate : public AcmResponsePrivate {

public:

    explicit RequestCertificateResponsePrivate(RequestCertificateResponse * const q);

    void parseRequestCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestCertificateResponse)
    Q_DISABLE_COPY(RequestCertificateResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
