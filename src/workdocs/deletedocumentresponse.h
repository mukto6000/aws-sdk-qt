// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOCUMENTRESPONSE_H
#define QTAWS_DELETEDOCUMENTRESPONSE_H

#include "workdocsresponse.h"
#include "deletedocumentrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteDocumentResponsePrivate;

class QTAWSWORKDOCS_EXPORT DeleteDocumentResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DeleteDocumentResponse(const DeleteDocumentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDocumentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDocumentResponse)
    Q_DISABLE_COPY(DeleteDocumentResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
