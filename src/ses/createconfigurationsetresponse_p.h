// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETRESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONSETRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CreateConfigurationSetResponse;

class CreateConfigurationSetResponsePrivate : public SesResponsePrivate {

public:

    explicit CreateConfigurationSetResponsePrivate(CreateConfigurationSetResponse * const q);

    void parseCreateConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetResponse)
    Q_DISABLE_COPY(CreateConfigurationSetResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
