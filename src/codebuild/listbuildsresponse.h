// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSRESPONSE_H
#define QTAWS_LISTBUILDSRESPONSE_H

#include "codebuildresponse.h"
#include "listbuildsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildsResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListBuildsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListBuildsResponse(const ListBuildsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBuildsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildsResponse)
    Q_DISABLE_COPY(ListBuildsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
