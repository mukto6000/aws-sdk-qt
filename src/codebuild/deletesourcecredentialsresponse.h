// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCECREDENTIALSRESPONSE_H
#define QTAWS_DELETESOURCECREDENTIALSRESPONSE_H

#include "codebuildresponse.h"
#include "deletesourcecredentialsrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteSourceCredentialsResponsePrivate;

class QTAWSCODEBUILD_EXPORT DeleteSourceCredentialsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    DeleteSourceCredentialsResponse(const DeleteSourceCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSourceCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSourceCredentialsResponse)
    Q_DISABLE_COPY(DeleteSourceCredentialsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
