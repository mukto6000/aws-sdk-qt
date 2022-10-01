// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESRESPONSE_P_H
#define QTAWS_LISTPACKAGESRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackagesResponse;

class ListPackagesResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit ListPackagesResponsePrivate(ListPackagesResponse * const q);

    void parseListPackagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPackagesResponse)
    Q_DISABLE_COPY(ListPackagesResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
