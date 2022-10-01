// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSFORPROJECTREQUEST_H
#define QTAWS_LISTBUILDSFORPROJECTREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildsForProjectRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListBuildsForProjectRequest : public CodeBuildRequest {

public:
    ListBuildsForProjectRequest(const ListBuildsForProjectRequest &other);
    ListBuildsForProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildsForProjectRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
