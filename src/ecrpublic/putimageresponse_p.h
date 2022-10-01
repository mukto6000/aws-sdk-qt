// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGERESPONSE_P_H
#define QTAWS_PUTIMAGERESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class PutImageResponse;

class PutImageResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit PutImageResponsePrivate(PutImageResponse * const q);

    void parsePutImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutImageResponse)
    Q_DISABLE_COPY(PutImageResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
