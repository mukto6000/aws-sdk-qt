// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTREQUEST_H
#define QTAWS_DELETEREPORTREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class DeleteReportRequestPrivate;

class QTAWSCODEBUILD_EXPORT DeleteReportRequest : public CodeBuildRequest {

public:
    DeleteReportRequest(const DeleteReportRequest &other);
    DeleteReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
