// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONRESPONSE_H
#define QTAWS_CREATEFUNCTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "createfunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateFunctionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateFunctionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateFunctionResponse(const CreateFunctionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFunctionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFunctionResponse)
    Q_DISABLE_COPY(CreateFunctionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
