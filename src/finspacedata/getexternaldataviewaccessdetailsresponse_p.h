// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTERNALDATAVIEWACCESSDETAILSRESPONSE_P_H
#define QTAWS_GETEXTERNALDATAVIEWACCESSDETAILSRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetExternalDataViewAccessDetailsResponse;

class GetExternalDataViewAccessDetailsResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetExternalDataViewAccessDetailsResponsePrivate(GetExternalDataViewAccessDetailsResponse * const q);

    void parseGetExternalDataViewAccessDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExternalDataViewAccessDetailsResponse)
    Q_DISABLE_COPY(GetExternalDataViewAccessDetailsResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
