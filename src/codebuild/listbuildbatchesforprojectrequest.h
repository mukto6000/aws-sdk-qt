// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESFORPROJECTREQUEST_H
#define QTAWS_LISTBUILDBATCHESFORPROJECTREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesForProjectRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListBuildBatchesForProjectRequest : public CodeBuildRequest {

public:
    ListBuildBatchesForProjectRequest(const ListBuildBatchesForProjectRequest &other);
    ListBuildBatchesForProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildBatchesForProjectRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
