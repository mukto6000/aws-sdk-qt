// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTCERTIFICATERESPONSE_P_H
#define QTAWS_IMPORTCERTIFICATERESPONSE_P_H

#include "transferresponse_p.h"

namespace QtAws {
namespace Transfer {

class ImportCertificateResponse;

class ImportCertificateResponsePrivate : public TransferResponsePrivate {

public:

    explicit ImportCertificateResponsePrivate(ImportCertificateResponse * const q);

    void parseImportCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportCertificateResponse)
    Q_DISABLE_COPY(ImportCertificateResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
