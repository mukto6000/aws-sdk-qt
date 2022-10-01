// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEALIASRESPONSE_P_H
#define QTAWS_UPDATEWORKSPACEALIASRESPONSE_P_H

#include "ampresponse_p.h"

namespace QtAws {
namespace Amp {

class UpdateWorkspaceAliasResponse;

class UpdateWorkspaceAliasResponsePrivate : public AmpResponsePrivate {

public:

    explicit UpdateWorkspaceAliasResponsePrivate(UpdateWorkspaceAliasResponse * const q);

    void parseUpdateWorkspaceAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceAliasResponse)
    Q_DISABLE_COPY(UpdateWorkspaceAliasResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
