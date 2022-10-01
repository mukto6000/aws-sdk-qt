// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBUCKETRESPONSE_H
#define QTAWS_CREATEBUCKETRESPONSE_H

#include "lightsailresponse.h"
#include "createbucketrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateBucketResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateBucketResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateBucketResponse(const CreateBucketRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBucketRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBucketResponse)
    Q_DISABLE_COPY(CreateBucketResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
