// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONALIASRESPONSE_P_H
#define QTAWS_CREATECONNECTIONALIASRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class CreateConnectionAliasResponse;

class CreateConnectionAliasResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit CreateConnectionAliasResponsePrivate(CreateConnectionAliasResponse * const q);

    void parseCreateConnectionAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectionAliasResponse)
    Q_DISABLE_COPY(CreateConnectionAliasResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
