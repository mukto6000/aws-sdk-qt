// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSRESPONSE_P_H
#define QTAWS_LISTPROJECTSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListProjectsResponse;

class ListProjectsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListProjectsResponsePrivate(ListProjectsResponse * const q);

    void parseListProjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListProjectsResponse)
    Q_DISABLE_COPY(ListProjectsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
