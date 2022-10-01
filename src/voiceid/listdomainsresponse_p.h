// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINSRESPONSE_P_H
#define QTAWS_LISTDOMAINSRESPONSE_P_H

#include "voiceidresponse_p.h"

namespace QtAws {
namespace VoiceId {

class ListDomainsResponse;

class ListDomainsResponsePrivate : public VoiceIdResponsePrivate {

public:

    explicit ListDomainsResponsePrivate(ListDomainsResponse * const q);

    void parseListDomainsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDomainsResponse)
    Q_DISABLE_COPY(ListDomainsResponsePrivate)

};

} // namespace VoiceId
} // namespace QtAws

#endif
