// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOCUMENTREQUEST_H
#define QTAWS_UPDATEDOCUMENTREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class UpdateDocumentRequestPrivate;

class QTAWSWORKDOCS_EXPORT UpdateDocumentRequest : public WorkDocsRequest {

public:
    UpdateDocumentRequest(const UpdateDocumentRequest &other);
    UpdateDocumentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDocumentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
