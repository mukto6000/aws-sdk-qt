// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYMATERIALRESPONSE_P_H
#define QTAWS_IMPORTKEYMATERIALRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ImportKeyMaterialResponse;

class ImportKeyMaterialResponsePrivate : public KmsResponsePrivate {

public:

    explicit ImportKeyMaterialResponsePrivate(ImportKeyMaterialResponse * const q);

    void parseImportKeyMaterialResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportKeyMaterialResponse)
    Q_DISABLE_COPY(ImportKeyMaterialResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
