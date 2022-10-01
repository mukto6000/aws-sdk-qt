// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTVERSIONRESPONSE_H
#define QTAWS_CREATEPROJECTVERSIONRESPONSE_H

#include "rekognitionresponse.h"
#include "createprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class CreateProjectVersionResponsePrivate;

class QTAWSREKOGNITION_EXPORT CreateProjectVersionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    CreateProjectVersionResponse(const CreateProjectVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProjectVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProjectVersionResponse)
    Q_DISABLE_COPY(CreateProjectVersionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
