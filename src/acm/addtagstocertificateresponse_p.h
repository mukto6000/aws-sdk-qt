// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTOCERTIFICATERESPONSE_P_H
#define QTAWS_ADDTAGSTOCERTIFICATERESPONSE_P_H

#include "acmresponse_p.h"

namespace QtAws {
namespace Acm {

class AddTagsToCertificateResponse;

class AddTagsToCertificateResponsePrivate : public AcmResponsePrivate {

public:

    explicit AddTagsToCertificateResponsePrivate(AddTagsToCertificateResponse * const q);

    void parseAddTagsToCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddTagsToCertificateResponse)
    Q_DISABLE_COPY(AddTagsToCertificateResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
