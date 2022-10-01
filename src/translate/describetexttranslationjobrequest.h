// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEXTTRANSLATIONJOBREQUEST_H
#define QTAWS_DESCRIBETEXTTRANSLATIONJOBREQUEST_H

#include "translaterequest.h"

namespace QtAws {
namespace Translate {

class DescribeTextTranslationJobRequestPrivate;

class QTAWSTRANSLATE_EXPORT DescribeTextTranslationJobRequest : public TranslateRequest {

public:
    DescribeTextTranslationJobRequest(const DescribeTextTranslationJobRequest &other);
    DescribeTextTranslationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTextTranslationJobRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
