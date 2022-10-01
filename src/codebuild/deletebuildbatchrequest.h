// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUILDBATCHREQUEST_H
#define QTAWS_DELETEBUILDBATCHREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteBuildBatchRequestPrivate;

class QTAWSCODEBUILD_EXPORT DeleteBuildBatchRequest : public CodeBuildRequest {

public:
    DeleteBuildBatchRequest(const DeleteBuildBatchRequest &other);
    DeleteBuildBatchRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBuildBatchRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
