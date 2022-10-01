// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGERECIPEPOLICYREQUEST_H
#define QTAWS_PUTIMAGERECIPEPOLICYREQUEST_H

#include "imagebuilderrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutImageRecipePolicyRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT PutImageRecipePolicyRequest : public ImageBuilderRequest {

public:
    PutImageRecipePolicyRequest(const PutImageRecipePolicyRequest &other);
    PutImageRecipePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageRecipePolicyRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
