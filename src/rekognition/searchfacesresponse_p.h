// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHFACESRESPONSE_P_H
#define QTAWS_SEARCHFACESRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class SearchFacesResponse;

class SearchFacesResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit SearchFacesResponsePrivate(SearchFacesResponse * const q);

    void parseSearchFacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchFacesResponse)
    Q_DISABLE_COPY(SearchFacesResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
