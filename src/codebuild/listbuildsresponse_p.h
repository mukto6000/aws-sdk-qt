// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSRESPONSE_P_H
#define QTAWS_LISTBUILDSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildsResponse;

class ListBuildsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListBuildsResponsePrivate(ListBuildsResponse * const q);

    void parseListBuildsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBuildsResponse)
    Q_DISABLE_COPY(ListBuildsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
