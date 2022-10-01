// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETIMPORTJOBRESPONSE_H
#define QTAWS_CREATEDATASETIMPORTJOBRESPONSE_H

#include "personalizeresponse.h"
#include "createdatasetimportjobrequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetImportJobResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateDatasetImportJobResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateDatasetImportJobResponse(const CreateDatasetImportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatasetImportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetImportJobResponse)
    Q_DISABLE_COPY(CreateDatasetImportJobResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
