// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECRAWLERREQUEST_H
#define QTAWS_CREATECRAWLERREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateCrawlerRequestPrivate;

class QTAWSGLUE_EXPORT CreateCrawlerRequest : public GlueRequest {

public:
    CreateCrawlerRequest(const CreateCrawlerRequest &other);
    CreateCrawlerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCrawlerRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
