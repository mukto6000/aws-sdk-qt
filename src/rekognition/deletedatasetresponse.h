// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETRESPONSE_H
#define QTAWS_DELETEDATASETRESPONSE_H

#include "rekognitionresponse.h"
#include "deletedatasetrequest.h"

namespace QtAws {
namespace Rekognition {

class DeleteDatasetResponsePrivate;

class QTAWSREKOGNITION_EXPORT DeleteDatasetResponse : public RekognitionResponse {
    Q_OBJECT

public:
    DeleteDatasetResponse(const DeleteDatasetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDatasetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetResponse)
    Q_DISABLE_COPY(DeleteDatasetResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
