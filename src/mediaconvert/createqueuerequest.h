// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUEUEREQUEST_H
#define QTAWS_CREATEQUEUEREQUEST_H

#include "mediaconvertrequest.h"

namespace QtAws {
namespace MediaConvert {

class CreateQueueRequestPrivate;

class QTAWSMEDIACONVERT_EXPORT CreateQueueRequest : public MediaConvertRequest {

public:
    CreateQueueRequest(const CreateQueueRequest &other);
    CreateQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQueueRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
