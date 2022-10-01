// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSOCIATIONRESPONSE_H
#define QTAWS_DELETEASSOCIATIONRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteassociationrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAssociationResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DeleteAssociationResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DeleteAssociationResponse(const DeleteAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssociationResponse)
    Q_DISABLE_COPY(DeleteAssociationResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
