// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECERTIFICATERESPONSE_P_H
#define QTAWS_DISASSOCIATECERTIFICATERESPONSE_P_H

#include "mediaconvertresponse_p.h"

namespace QtAws {
namespace MediaConvert {

class DisassociateCertificateResponse;

class DisassociateCertificateResponsePrivate : public MediaConvertResponsePrivate {

public:

    explicit DisassociateCertificateResponsePrivate(DisassociateCertificateResponse * const q);

    void parseDisassociateCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateCertificateResponse)
    Q_DISABLE_COPY(DisassociateCertificateResponsePrivate)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
