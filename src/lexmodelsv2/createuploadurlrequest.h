// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADURLREQUEST_H
#define QTAWS_CREATEUPLOADURLREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateUploadUrlRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateUploadUrlRequest : public LexModelsV2Request {

public:
    CreateUploadUrlRequest(const CreateUploadUrlRequest &other);
    CreateUploadUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUploadUrlRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
