// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEPACKAGERESPONSE_P_H
#define QTAWS_DISSOCIATEPACKAGERESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DissociatePackageResponse;

class DissociatePackageResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DissociatePackageResponsePrivate(DissociatePackageResponse * const q);

    void parseDissociatePackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DissociatePackageResponse)
    Q_DISABLE_COPY(DissociatePackageResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
