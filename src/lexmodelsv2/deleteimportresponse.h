// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMPORTRESPONSE_H
#define QTAWS_DELETEIMPORTRESPONSE_H

#include "lexmodelsv2response.h"
#include "deleteimportrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteImportResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteImportResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteImportResponse(const DeleteImportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteImportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteImportResponse)
    Q_DISABLE_COPY(DeleteImportResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
