// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGEREQUEST_H
#define QTAWS_CREATEIMAGEREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImageRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateImageRequest : public ImageBuilderRequest {

public:
    CreateImageRequest(const CreateImageRequest &other);
    CreateImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
