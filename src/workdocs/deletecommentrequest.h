// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMMENTREQUEST_H
#define QTAWS_DELETECOMMENTREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteCommentRequestPrivate;

class QTAWSWORKDOCS_EXPORT DeleteCommentRequest : public WorkDocsRequest {

public:
    DeleteCommentRequest(const DeleteCommentRequest &other);
    DeleteCommentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCommentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
